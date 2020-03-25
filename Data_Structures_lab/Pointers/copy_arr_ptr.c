// copy one array to another using ptr

#include<stdio.h>

#define SIZE 5

void print_arr(int*);
void print_arr_driver(int*, int);

void arr_cpy(int*, int* );
void arr_cpy_driver(int *, int*, int);


int main()
{
    int i;
    int source[SIZE];
    int target[SIZE];

    for(i=0;i<SIZE;i++)
    {
        scanf("%d", source+i);
    }

    arr_cpy(target, source);

    print_arr(source);
    print_arr(target);


}

void print_arr(int* arr)
{
    print_arr_driver(arr, 0);
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
        printf("%d", *arr);
        print_arr_driver(arr+1, i+1);
    }
}

void arr_cpy(int* target, int* source)
{
    arr_cpy_driver(target, source, 0);
}

void arr_cpy_driver(int * target, int* source, int i)
{
    if(i == SIZE)
    {
        return;
    }
    else
    {
        *target = *source;
        arr_cpy_driver(target+1, source+1, i+1);
    }
}