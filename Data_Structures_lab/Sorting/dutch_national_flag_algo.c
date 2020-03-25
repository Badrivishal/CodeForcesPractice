// Quicksort sorting algorithm for array

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void swap(int * , int , int );
void partition(int* , int , int );

void print_arr(int*);
void print_arr_driver(int*, int);

int main()
{
    int i, len = 10;
    int arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d", arr+i);
    }

    print_arr(arr);


    print_arr(arr);

    return 0;
}

void partition(int* a, int start, int end)
{
    int low, mid, hi;
    
}




void swap(int * a, int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
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
