// Quicksort sorting algorithm for array

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void swap(int * , int , int );
void quicksort(int* , int , int );
int partition(int* , int , int );

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

    quicksort(arr, 0, len-1);

    print_arr(arr);

    return 0;
}

void swap(int * a, int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void quicksort(int* a, int start, int end)
{
    int j, r;
    r = partition(a, start, end);
    if(r==-1)
    {
        return;
    }
    else
    {
        quicksort(a, start, r);
        quicksort(a, r+1, end);
    }
}

int partition(int* a, int start, int end)
{
    int pivot, i, j, temp;

    if(start >= end)
    {
        return -1;
    }

    pivot = start;
    i = start;
    j = end;

    while(i<j)
    {
        while(a[i]<=a[pivot])
        {
            i++;
        }
        while(a[j]>a[pivot])
        {
            j--;
        }
        if(i<j)
        {
            swap(a, i, j);
        }
    }
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;
    return j;
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
