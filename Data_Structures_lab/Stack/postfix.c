    #include<stdio.h>
    #include<math.h>
    #include<string.h>
    #include<stdlib.h>

    #define SIZE 15
    #define TRUE 1
    #define FALSE 0

    typedef int bool;
    typedef char* stack_entry;

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
    void traverse_stack(STACK s);

    int apply(int, int, char*);

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
        int i1, i2, out;
        char input[15] = "345+*";
        int i = 0;
        while(input[i]!='\0')
        {
            char* c1 = (char*)malloc(sizeof(char)*10);
            c1[0] = input[i];
            c1[1] = '\0';
            printf("c1 - %s \n", c1);
            fflush(stdout);
            if(c1[0] <= '9' && c1[0] >= '0')
            {
                push(c1, &s1);
            }
            else
            {
                // i1 = atoi(pop(&s1));
                // i2 = atoi(pop(&s1));
                sscanf(pop(&s1), "%d", &i1); 
                sscanf(pop(&s1), "%d", &i2); 

                out = apply(i1, i2, c1);

                printf("out  ------------  %d %s %d = %d\n", i2, c1, i1, out);

                // char c_out[10];        This Doesnt Work.. It overlaps in the same memmory space. 
                char* c_out = (char*)malloc(sizeof(char)*10);

                // itoa(out, c_out, 10);
                sprintf(c_out, "%d", out);

                push(c_out, &s1);
            }
            i++;
        }

        printf("fin: %s", pop(&s1));

        return 0;
    }


    void initialize(STACK *s)
    {
        s->top = -1;
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

    bool is_stack_full(STACK s)
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

    void traverse_stack(STACK s)
    {
        if(!is_stack_empty(s))
        {
            int i;
            printf("Traverse_stack:\n");
            for(i=0;i<=s.top;i++)
            {
                printf("%s ", s.entry[i]);
            }
            printf("\nEnd\n");
        }
        else
            printf("Stack Empty!!\n");
    }

    int apply(int a, int b, char* c)
    {
        if(c[0] == '+')
        {
            return a+b;
        }
        else if (c[0] == '-')
        {
            return b-a;
        }
        else if (c[0] == '*')
        {
            return a*b;
        }
        else
        {
            return b/a;
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
