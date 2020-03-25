#include<stdio.h>
#include<stdlib.h>

typedef int list_entry;

typedef struct node
{
    list_entry data;
    struct node *next;
}NODE;

NODE* create_Node(list_entry );
NODE *insert_Begin(NODE* , list_entry);
NODE *insert_End(NODE*, list_entry);
NODE *insert_Pos(NODE*, list_entry, int);
int length_LL(NODE*);
int freq_entry(NODE*, list_entry);
NODE* get_Node(NODE*, int);
NODE* append_node(NODE*, NODE*);
NODE* merge_sort_node(NODE*, NODE*);
NODE* merge_alt_node(NODE*, NODE*);
void print_last_all_m(NODE*, int);
void print_last_m(NODE*, int);
NODE* split(NODE*);
void print_LL(NODE* );


int main()
{
    NODE * a = NULL;
    a = create_Node(15);
    a = insert_Begin(a, 5);
    a = insert_End(a, 19);
    a = insert_Pos(a, 11, 1);
    a = insert_Pos(a, 2, 0);
    a = insert_Pos(a, 4, 10);
    int len = length_LL(a);
    printf("L: %d\n", len);
    int freq = freq_entry(a, 1);
    printf("F: %d\n", freq);
    NODE* new = get_Node(a, 3);
    printf("D: %d\n", new->data);


    NODE * b = NULL;
    b = create_Node(8);
    b = insert_Begin(b, 7);
    b = insert_End(b, 12);
    b = insert_End(b, 1);
    b = insert_Begin(b, 1);
    // b = insert_Pos(b, 1, 2);
    b = insert_Pos(b, 4, 1);
    b = insert_Pos(b, 8, 10);

    // printf("%d", a->data);
    print_LL(a);
    print_LL(b);

    NODE* c, *d;

    // c = append_node(a, b);
    c = merge_alt_node(a, b);
    print_LL(c);

    print_last_all_m(c, 4);
    print_last_m(c, 3);

    d = split(c);

    print_LL(c);
    print_LL(d);

    return 0;
}

NODE *create_Node(list_entry data)
{
    NODE* p;
    p = (NODE*)malloc(sizeof(NODE));
    p->data = data;
    p->next = NULL;
    return p;
}

NODE *insert_Begin(NODE* header, list_entry entry)
{
    NODE* p;
    p = create_Node(entry);
    if (header == NULL)
    {
        header = p;
    }
    else
    {
        p->next = header;
        header = p;
    }
    return header;
}

NODE *insert_Pos(NODE* header, list_entry entry, int pos)
{
    NODE* p, *curr;
    curr = header;
    int i = 1;
    int flag = 0;
    p = create_Node(entry);
    if(header == NULL && pos == 0)
    {
        header = p;
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
            p-> next = header;
            return p;
        }
    }
    return header;
}

NODE *insert_End(NODE* header, list_entry entry)
{
    NODE* p, *curr;
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

int length_LL(NODE* header)
{
    NODE* curr;
    curr = header;
    int len = 0;
    while (curr!=NULL)
    {
        curr = curr->next;
        len ++;
    }
    return len;
}

int freq_entry(NODE* header, list_entry entry)
{
    NODE *curr;
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

NODE* get_Node(NODE* header, int pos)
{
    int i = 1;
    NODE *curr;
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

NODE* append_node(NODE* header1, NODE* header2)
{
    if(header1 == NULL)
    {
        return header2;
    }
    else if(header2 == NULL)
    {
        return header1;
    }
    else
    {
        NODE* curr;
        curr = header1;
        while(curr->next!=NULL)
        {
            curr = curr->next;
        }
        curr->next = header2;
        return header1;
    }
    
}


NODE* merge_sort_node(NODE* header1, NODE* header2)
{
    if(header1 == NULL)
    {
        return header2;
    }
    else if(header2 == NULL)
    {
        return header1; 
    }
    else
    {
        NODE* output;
        output = create_Node(-1);
        NODE* o_curr = output;
        NODE* curr1 = header1;
        NODE* curr2 = header2;
        while(curr1->next!=NULL&&curr2->next!=NULL)
        {
            if(curr1->data < curr2->data)
            {
                o_curr->next = curr1;
                curr1 = curr1->next;
                o_curr = o_curr->next;
            }
            else
            {
                o_curr->next = curr2;
                curr2 = curr2->next;
                o_curr = o_curr->next;
            }
        }
        if(curr1->next == NULL)
        {
            o_curr->next = curr2;
        }
        else
        {
            o_curr->next = curr1;
        }
        return output->next;
    }
}

NODE* merge_alt_node(NODE* header1, NODE* header2)
{
    if(header1 == NULL)
    {
        return header2;
    }
    else if(header2 == NULL)
    {
        return header1; 
    }
    else
    {
        NODE* output;
        output = create_Node(-1);
        NODE* o_curr = output;
        NODE* curr1 = header1;
        NODE* curr2 = header2;
        while(curr1!=NULL&&curr2!=NULL)
        {
            o_curr->next = curr1;
            curr1 = curr1->next;
            o_curr->next->next = curr2;
            curr2 = curr2->next;
            o_curr = o_curr->next->next;
        }
        if(curr1 == NULL)
        {
            o_curr->next = curr2;
        }
        else
        {
            o_curr->next = curr1;
        }
        return output->next;
    }
}

NODE* split(NODE* header)
{
    NODE* curr, *temp;
    curr = header;
    int l = length_LL(header);
    l = l/2;
    if(l == 0)
    {
        return NULL;
    }
    else
    {
        while(l>0)
        {
            curr = curr->next;
            l--;
        }
        temp = curr->next;
        curr-> next = NULL;
        return temp;
    }
}

void print_last_m(NODE* header, int m)
{
    int i = 0;
    NODE* curr1, *curr2;
    curr1 = header;
    while(i<m)
    {
        curr1 = curr1-> next;
        i++;
    }
    curr2 = header;
    while (curr1!= NULL)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    printf("%d\n", curr2->data);

}

void print_last_all_m(NODE* header, int m)
{
    int i = 0;
    NODE* curr1, *curr2;
    curr1 = header;
    while(i<m-1)
    {
        curr1 = curr1-> next;
        i++;
    }
    curr2 = header;
    while (curr1-> next!= NULL)
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    while (curr2!= NULL)
    {
        printf("%d ", curr2->data);
        curr2 = curr2-> next;
    }
    printf("\n");
}


void print_LL(NODE* header)
{
    if(header == NULL)
    {
        printf("Linked List Empty!!!");
    }
    else
    {
        NODE* p = header;
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

