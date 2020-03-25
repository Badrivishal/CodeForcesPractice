#include<stdio.h>
#include<stdlib.h>

typedef int list_entry;

typedef struct node
{
    list_entry data;
    struct node *next;
}Node;

typedef struct Linked_List
{
    Node* header;
}Linked_List;

void initialize_LL(Linked_List*);
void print_LL(Linked_List);


Node* create_Node(list_entry );
void insert_Begin(Linked_List , list_entry);
Node *insert_End(Node*, list_entry);
Node *insert_Pos(Node*, list_entry, int);
int length_LL(Node*);
int freq_entry(Node*, list_entry);
Node* get_Node(Node*, int);


int main()
{
    Linked_List a;

    initialize_LL(&a);
    


    Node * b = NULL;
    b = create_Node(2);
    insert_Begin(a, 5);
    a = insert_End(a, 10);
    a = insert_Pos(a, 15, 1);
    a = insert_Pos(a, 2, 0);
    a = insert_Pos(a, 4, 10);
    int len = length_LL(a);
    printf("L: %d\n", len);
    int freq = freq_entry(a, 1);
    printf("F: %d\n", freq);
    Node* new = get_Node(a, 3);
    printf("D: %d\n", new->data);

    // printf("%d", a->data);
    print_LL(a);

    return 0;
}

void initialize_LL(Linked_List *l)
{
    l = (Linked_List*)malloc(sizeof(Linked_List));
}


Node *create_Node(list_entry data)
{
    Node* p;
    p = (Node*)malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;
    return p;
}

void insert_Begin(Linked_List l, list_entry entry)
{
    Node* p;
    p = create_Node(entry);
    if (l.header == NULL)
    {
        l.header = p;
    }
    else
    {
        p->next = l.header;
        l.header = p;
    }
}

void insert_Pos(Linked_List l, list_entry entry, int pos)
{
    Node* p, *curr;
    curr = l.header;
    int i = 1;
    int flag = 0;
    p = create_Node(entry);
    if(l.header == NULL && pos == 0)
    {
        l.header = p;
    }
    else
    {
        while(i<pos)
        {
            if (curr->next!=NULL)
            {
                curr = curr->next;
            }
            else
            {
                printf("Position Not in list!!\n");
                flag  = 1;
                break;
            }
            i++;
        }
        if(flag == 0 && pos!=0)
        {
            p-> next = curr->next;
            curr->next = p;
        }
        else if (pos == 0)
        {
            p-> next = l.header;
            return p;
        }
    }
}

Node *insert_End(Node* header, list_entry entry)
{
    Node* p, *curr;
    p = create_Node(entry);
    if (header == NULL)
    {
        header = p;
    }
    else
    {
        while (curr->next!=NULL)
        {
            curr = curr->next;
        }
        curr->next = p;
    }
    return header;
}

int length_LL(Node* header)
{
    Node* curr;
    curr = header;
    int len = 0;
    while (curr!=NULL)
    {
        curr = curr->next;
        len ++;
    }
    return len;
}

int freq_entry(Node* header, list_entry entry)
{
    Node *curr;
    curr = header;
    int freq = 0;
    while (curr!=NULL)
    {
        if(curr->data==entry)
        {
            freq++;
        }
        curr = curr->next;
    }
    return freq;
}

Node* get_Node(Node* header, int pos)
{
    int i = 1;
    Node *curr;
    curr = header;
    while(i<pos)
    {
        if(curr->next!=NULL)
        {
            curr = curr->next;
            i++;
        }
        else
        {
            printf("List doesnt have that many elements!!\n");
            return NULL;
        }
        
    }
    return curr;
}



void print_LL(Linked_List l)
{
    if(l.header == NULL)
    {
        printf("Linked List Empty!!!");
    }
    else
    {
        Node* p = l.header;
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

