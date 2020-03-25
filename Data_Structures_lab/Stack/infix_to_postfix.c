#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 15
#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef char stack_entry;
typedef char queue_entry;


typedef struct stack
{
    int top;
    int size;
    stack_entry *entry;
}STACK;

typedef struct queue
{
    queue_entry *entry;
    int front;
    int rear;
    int count;
    int capacity;
}QUEUE;

void initialize_queue(QUEUE*, int);
BOOL is_queue_full(QUEUE);
BOOL is_queue_empty(QUEUE);
void en_queue(QUEUE*, queue_entry);
queue_entry de_queue(QUEUE*);
queue_entry queue_front(QUEUE);
void clear_queue(QUEUE*);
void queue_traverse(QUEUE);


void initialize(STACK *s, int size);
void push(stack_entry, STACK *s);
stack_entry pop(STACK *s);
BOOL is_stack_empty(STACK s);
BOOL is_stack_full(STACK s);
void traverse_stack(STACK s);

int main()
{
    STACK s1;
    char input[50] = "(((9+8)-(7+6))/((5)/(4*3)))";
    int i;
    QUEUE out;
    initialize_queue(&out, 50);
    initialize(&s1, 50);
    while(input[i]!='\0')
    {
        // char* c1 = (char*)malloc(sizeof(char)*10);
        // printf("queue:\n");
        // queue_traverse(out);
        // printf("Stack:\n");
        // traverse_stack(s1);
        char c1;
        c1 = input[i];
        if(c1 <= '9' && c1 >= '0')
        {
            en_queue(&out, c1);
        }
        else if(c1 == '(')
        {
            push(c1, &s1);
        }
        else if(c1 == ')')
        {
            while(!is_stack_empty(s1)&&s1.entry[s1.top]!='(')
            {
                char a = pop(&s1);
                if(a!=')'&&a!='(')
                    en_queue(&out, a);
            }
            pop(&s1);
        }
        else
        {
            if(is_stack_empty(s1)||s1.entry[s1.top]!='(')
            {
                push(c1, &s1);
            }
            else
            {
                while(!is_stack_empty(s1)&&s1.entry[s1.top]!='(')
                {
                    char a = pop(&s1);
                    if(a!=')'&&a!='(')
                        en_queue(&out, a);
                }
                push(c1, &s1);
            }
        }
        i++;
    }
    while (!is_stack_empty(s1))
    {
        char a = pop(&s1);
        if(a!=')'&&a!='(')
            en_queue(&out, a);
    }
    queue_traverse(out);
    return 0;
}

void initialize(STACK *s, int size)
{
    s->top = -1;
    s->size = size;
    s->entry = (stack_entry*)malloc(sizeof(stack_entry)*size);
}

void push(stack_entry entry1, STACK *s)
{
    if(!(is_stack_full(*s)))
    {
        s->entry[(s->top)+1] = entry1;
        s->top = s->top + 1;
    }
    else
    {
        printf("STACK OVERLOAD!!\n");
    }
}

stack_entry pop(STACK *s)
{
    if(!is_stack_empty(*s))
    {
        stack_entry out;
        out = s->entry[(s->top)];
        s->top -= 1;
        return out;
    }
    else
    {
        return '\0';
    }
}

BOOL is_stack_full(STACK s)
{
    if(s.top == SIZE)
    {
        // printf("Hii\n");
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

BOOL is_stack_empty(STACK s)
{
    if(s.top == -1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void traverse_stack(STACK s)
{
    if(!is_stack_empty(s))
    {
        int i;
        // printf("Traverse_stack:\n");
        for(i=0;i<=s.top;i++)
        {
            printf("%c ", s.entry[i]);
        }
        printf("\n");
    }
    else
        printf("Stack Empty!!\n");
}
void initialize_queue(QUEUE* q, int size)
{
    q->entry = (queue_entry*)malloc(sizeof(queue_entry)*size);
    q->capacity = size;
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

void en_queue(QUEUE* q, queue_entry e)
{
    if(!is_queue_full(*q))
    {
        q->rear = (q->rear+1)%(q->capacity);
        q->entry[q->rear] = e;
        q->count = q->count + 1;
    }
    else
    {
        printf("Queue Overflow!!!\n");
    }
}

queue_entry de_queue(QUEUE* q)
{
    queue_entry out;
    if(!is_queue_empty(*q))
    {
        q->count = q->count - 1;
        out = q->entry[q->front];
        q->front = (q->front + 1)%(q->capacity); 
        return out;
    }
    else
    {
        printf("Queue Empty!!!\n");
    }    
}


BOOL is_queue_full(QUEUE q)
{
    if(q.count == q.capacity)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

BOOL is_queue_empty(QUEUE q)
{
    if(q.count == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

queue_entry queue_front(QUEUE q)
{
    return(q.front);
}

// Works only when queue_entry is int.
void queue_traverse(QUEUE q)
{
    int i;
    for(i=0;i<q.count;i++)
    {
        printf("%c", q.entry[(q.front + i)%(q.capacity)]);
    }
    printf("\n");
}

void clear_queue(QUEUE* q)
{
    q->count = 0;
    q->front = (q->rear-1)%(q->capacity);
}