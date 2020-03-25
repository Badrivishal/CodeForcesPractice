#include<stdio.h>

#define SIZE 15
#define TRUE 1
#define FALSE 0

typedef int bool;
typedef char stack_entry;

typedef struct stack
{
    int top;
    stack_entry entry[SIZE];
}STACK;

void initialize(STACK *s);
void push(stack_entry, STACK *s);
stack_entry pop(STACK *s);
bool is_stack_empty(STACK s);
bool is_stack_full(STACK s);

int char_to_int(char );
char int_to_char(int );
int apply(int, int, char);

void print_arr(int*);
void print_arr_driver(int*, int);

// int main()
// {
//     STACK s1;
//     initialize(&s1);
//     char c1;
//     int i1, i2, out;
//     FILE *fp1, *fp2;
//     fp1 = fopen("postfix.in", "r");
//     fp2 = fopen("postfix.out", "w");
//     fflush(stdout);
//     fflush(stdin);
//     while(!feof(fp1))
//     {
//         //printf("%s      %d\n", s1.entry, s1.top);
//         c1 = fgetc(fp1);
//         printf("c1 - %c \n", c1);
//         if(c1 <= '9' && c1 >= '0')
//         {
//             printf("HIiiiiiiiiiiiiiiiiiii\n");
//             push(c1, &s1);
//             printf("Pushed successfully\n");
//         }
//         else
//         {
//             i1 = char_to_int(pop(&s1));
//             i2 = char_to_int(pop(&s1));

//             out = apply(i1, i2, c1);

//             printf("out  ------------  __%d __%d __%d", i1, i2, out);

//             push(out, &s1);
//         }
//     }

//     putc(pop(&s1), fp2);



//     return 0;
// }

int main()
{
    STACK s1;
    initialize(&s1);
    char c1;
    int i1, i2, out;
    char input[15] = "123*+4-{";
    int i = 0;
    while(input[i]!='\0')
    {
        //printf("%s      %d\n", s1.entry, s1.top);
        c1 = input[i];
        printf("c1 - %c \n", c1);
        if(c1 <= '9' && c1 >= '0')
        {
            printf("HIiiiiiiiiiiiiiiiiiii\n");
            push(c1, &s1);
            printf("Pushed successfully\n");
        }
        else
        {
            i1 = char_to_int(pop(&s1));
            i2 = char_to_int(pop(&s1));

            out = apply(i1, i2, c1);

            printf("out  ------------  %d %c %d = %d\n", i1, c1, i2, out);

            push(int_to_char(out), &s1);
        }
        i++;
    }

    printf("%c", pop(&s1));

    return 0;
}


void initialize(STACK *s)
{
    s->top = -1;
}

void push(stack_entry entry1, STACK *s)
{
    printf("Before  %s \n", s->entry);

    if(!(is_stack_full(*s)))
    {
        s->entry[(s->top)+1] = entry1;
        s->top = s->top + 1;
    }
    else
    {
        printf("STACK OVERLOAD!!\n");
    }
    fflush(stdout);
    printf("Chnaged: %s\n", s->entry);
}

stack_entry pop(STACK *s)
{
    if(!is_stack_empty(*s))
    {
        stack_entry out;
        out = s->entry[(s->top)-1];
        s->top -= 1;
        return out;
    }
    else
    {
        return '\0';
    }
}

bool is_stack_full(STACK s)
{
    if(s.top == SIZE)
    {
        printf("Hii\n");
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

bool is_stack_empty(STACK s)
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

int char_to_int(char a)
{
    int out;
    out = (int)a - (int)'0';
}

char int_to_char(int a)
{
    char out;
    out = (char)(a+(int)'0');
}

int apply(int a, int b, char c)
{
    if(c == '+')
    {
        return a+b;
    }
    else if (c == '-')
    {
        return a-b;
    }
    else if (c == '*')
    {
        return a*b;
    }
    else
    {
        return a/b;
    }
        
}


void print_arr_driver(int* arr, int i)
{
    if(i == SIZE)
    {
        printf("\n");
        return;
    }
    else
    {
        printf("%d ", *arr);
        print_arr_driver(arr+1, i+1);
    }
}

void print_arr(int* arr)
{
    void print_arr_driver(int*, int);

    print_arr_driver(arr, 0);
}
