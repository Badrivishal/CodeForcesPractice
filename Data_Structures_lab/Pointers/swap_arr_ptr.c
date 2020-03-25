// swap two arrays using pointers

#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

void swap_arr(int**, int**);

void print_arr(int*);
void print_arr_driver(int*, int);

int main()
{
    int* a;
    int* b;
    int i;
    a = (int*)malloc(sizeof(int)*SIZE);
    b = (int*)malloc(sizeof(int)*SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", a+i);
    }
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", b+i);
    }

    print_arr(a);
    print_arr(b);

    swap_arr(&a, &b);
    
    print_arr(a);
    print_arr(b);

    return 0;
}

void swap_arr(int** a, int** b)
{
    int * p;
    p = *a;
    *a = *b;
    *b = p;
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