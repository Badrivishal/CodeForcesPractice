#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef int queue_entry;

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


int main()
{
    QUEUE q1;
    initialize_queue(&q1, 5);
    return 0;
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
        printf("%d ", q.entry[(q.front + i)%(q.capacity)]);
    }
    printf("\n");
}

void clear_queue(QUEUE* q)
{
    q->count = 0;
    q->front = (q->rear-1)%(q->capacity);
}