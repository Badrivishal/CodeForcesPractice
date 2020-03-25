#include<stdio.h>
#include<stdlib.h>
int len=0;
int count=0;
typedef char listentry;
typedef struct node
{
	listentry entry;
	struct node *next;
}Node;

Node * initlinkedlist();
Node * createNode(listentry entry);
Node * insertbegin(Node * headder,listentry entry);
Node * insertend(Node * header,listentry entry);
Node * insertsorted(Node * header,listentry entry);
Node * insertatposition(Node * header,listentry entry,int position);
Node * nnode(Node * header,int position);
void split_list(Node * header);
void n_p_node(Node * header,int position );
void merge(Node * old_header,Node * new_header);
void printlinkedlist(Node * header);
void iteration(Node*header,listentry entry);
Node * appending_two_list(Node * old_header,Node * new_header);

int main()
{
	Node * header;
	Node * old_header;
	Node * new_header;
	Node * Req_node;
	int ch = -1;
	int pos;
	char a;
	int n,count;
	int l;
	listentry c;
	old_header=NULL;
	header = NULL;
	header=old_header;
	new_header = NULL;
	printf("\n 0 : Print Linked List");
	printf("\n 1: Insert at begining");
	printf("\n 2 : Insert at end");
	printf("\n 3 : Insert in sorted manner");
	printf("\n 4: Insert at a position");
	printf("\n 5: To find length of linked list");
	printf("\n 6: To find number of times character iterated");
	printf("\n 7:To extract the position node");
	printf("\n 8:To extract the next and previous node");
	printf("\n 9:Split in two lists");
	printf("\n 10:Create another list ");
	printf("\n 11:Appending the list");
	printf("\n 12:sorted");
	printf("\n 99 : EXIT");
	while(ch!=99)
	{
		printf("\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
			{
			case 0:
				printlinkedlist(header);
				break;

			case 1:
				printf("Enter the character to be inserted in the linked list");
				fflush(stdin);
				scanf("%c",&c);
				header = insertbegin(header,c);
				break;

			case 2:
				printf("Enter the character to be inserted in the linked list");
				fflush(stdin);
				scanf("%c",&c);
				header = insertend(header , c);
				break;

			case 3:
				printf("Enter the character to be inserted in the linked list");
				fflush(stdin);
				scanf("%c",&c);
				header = insertsorted(header,c);
				break;

			case 4:
				printf("Enter the character to be inserted in the linked list");
				fflush(stdin);
				scanf("%c",&c);
				printf("enter the position at which the character is to be inserted");
				scanf("%d",&pos);
				header = insertatposition(header,c,pos);
				break;

			case 5:
				printf("The length of the linked list: %d",len);
				break;

			case 6:
				printf("Enter the charcter");
				fflush(stdin);
				scanf("%c",&c);
				iteration(header,c);
				break;

			case 7:
				printf("Enter the node position u want to extract");
				fflush(stdin);
				scanf("%d",&pos);
				Req_node = nnode(header,pos);
				printf("The element of the node %c and the address %ld",Req_node->entry,Req_node);
				break;
				
			case 8:
				printf("Enter the node position u want to extract");
				fflush(stdin);
				scanf("%d",&pos);
				n_p_node(header,pos);
				break;

			case 9:
				split_list(header);
				break;

			case 10:
				old_header=header;
				header=new_header;
				break;

			case 11:
				new_header=header;
				printf("%ld\n",new_header);
				header=appending_two_list(old_header,new_header);
				printlinkedlist(header);
				break;

			case 12:	
				new_header=header;
				merge(old_header,new_header);
				break;

			default:
				printf("wrong choice");

			}
	}
	return 0;
}
/////////////////////////////////////////////////////////
Node* createNode(listentry entry)
{
	len=len+1;
	Node * p;
	p = (Node *)malloc(sizeof(Node));
	p->entry = entry;
	p->next = NULL;
	return (p);
}
Node * appending_two_list(Node * old_header,Node * new_header)
{
	printf(" old header %ld\n",old_header);
	Node * current;
	current=old_header;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next=new_header;
	printf("%ld\n",new_header);
	printf("%ld\n",old_header->next);
	printf("joined list:");
	return(old_header);
}
void merge(Node * old_header,Node * new_header)
{
	Node * current1;
	Node * current2;
	Node * header1;
	header1=NULL;
	current1=old_header;
	current2=new_header;
	while(current1!=NULL && current2!=NULL)
	{
		if(current1->entry > current2->entry)
		{
			header1=insertend(header1, current1->entry);
			current2=current2->next;
			current1=current1->next;
		}
		else
		{
			header1=insertend(header1, current2->entry);
			current2=current2->next;
			current1=current1->next;
		}
	}
	printlinkedlist(header1);
}
void split_list(Node * header)
{
	Node * current;
	Node * header1;
	Node * header2;
	int end,i;
	header1=NULL;
	header2=NULL;
	current=header;
	if(len/2==0)
	{
		end=len/2;
	}
	else
	{
		end=len/2-1;
	}
	for(i=0;i<=end;i++)
	{
		header1=insertend(header1, current->entry);
		current=current->next;
	}
	while(current!=NULL)
	{
		header2=insertbegin(header2,current->entry);
		current=current->next;
	}
	printf("The first lsit is :");
	printlinkedlist(header1);
	printf("\nThe second list is :");
	printlinkedlist(header2);	
}
void iteration(Node*header,listentry entry)
{
	int count,i;
	Node * current;
	current=header;
	count=0;
	for(i=0;current!=NULL;i++)
	{
		if(current->entry==entry)
		{
			count++;
		}
		current=current->next;
	}
	printf("The number of iterations is: %d",count);
}
Node * nnode(Node * header,int position )
{
	Node * current;
	int i;
	current =header;
	if(header==NULL)
	{
		printf("linked list is empty");
	}
	if(position==1)
	{
		current=header;
	}
	for(i=2;i<=position;i++)
	{
		current=current->next;
	}
	return(current);
}
void n_p_node(Node * header,int position )
{
	Node * current;
	int i;
	current =header;
	if(header==NULL)
	{
		printf("linked list is empty");
	}
	if(position==1)
	{
		current=header;
		printf("Wrong input for previous node");
		printf("the next node is %c and the address %ld",current->next->entry,current->next);
	}
	for(i=2;i<position;i++)
	{
		current=current->next;
	}
	if(position>1)
	{
		printf("the previous node is %c and the address %ld",current->entry,current);
		printf("The element of the next node %c and the address %ld",current->next->next->entry,current->next->next);
	}
}
/////////////////////////////////////////////////////////////
Node * insertbegin(Node * header,listentry entry)
{
	Node * p;
	p = createNode(entry);
	if(header == NULL)
	{
		header =p;
	}
	else
	{
		p->next = header;
		header = p;
	}
	return(header);
}
////////////////////////////////////////////////////////
Node * insertend(Node * header,listentry entry)
{
Node * p, *current;
p = createNode(entry);
current = header;
if(current == NULL)
{
header =p;
}
else
{
while(current->next !=NULL)
{
current = current->next;
}
current->next = p;
return(header);
}
}
/////////////////////////////////////////////////////
Node * insertsorted(Node * header ,listentry entry)
{
Node *p,*current;
p = createNode(entry);
current = header;
if(current == NULL)
{
header =p;
}
else
{
current = header;
while((current->next !=NULL)&&(current->next->entry <=p->entry))
{
current = current->next;
}
p->next = current->next;
current->next = p;
}
return(header);
}
//////////////////////////////////////////////////////////
Node * insertatposition(Node * header,listentry entry,int position)
{
Node *p,*current;
int i;
p = createNode(entry);
current = header;
if((position ==1)&&(current ==NULL))
{
header = p;
}
else
{
if((header !=NULL)&&(position ==1))
{
p->next = header;
header = p;
}
else
{
if(header != NULL)
{
current = header;
for(i=2;((i<=position-1)&&(current !=NULL));i++)
{
current = current->next;
}
if(current != NULL)
{
p->next = current->next;
current->next = p;
printf("\n data inserted succesfully");
}
else
{
printf("\n cannot insert at given position");
}
}
}
}
return(header);
}
void printlinkedlist(Node * header)
{
Node * current;
current = header;
while(current !=NULL)
{
	printf("\n%c",current->entry);
	current = current->next;
}
}

