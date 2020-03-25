// input and print using pointers in the case of an array

#include<stdio.h>

#define SIZE 5

void print_arr(int*);
// void print_arr_driver(int*, int);

int main()
{
    int i;
    int arr[SIZE];
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", arr+i);
    }

    print_arr_driver(arr, 0);

    print_arr(arr);
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

void print_arr(int* arr)
{
    void print_arr_driver(int*, int);

    print_arr_driver(arr, 0);
}
