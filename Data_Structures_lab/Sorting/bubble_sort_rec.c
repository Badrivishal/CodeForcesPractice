
#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void bubble(int *, int , int);
void swap(int * , int , int );

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

    printf("in\n");

    print_arr(arr);

    bubble(arr, 0,SIZE-1);

    printf("out\n");
    print_arr(arr);

    return 0;
}

void bubble(int *a, int low, int high)
{
    if(high == low)
    {
        return ;
    }
    else
    {
        if(low<high)
        {
            if(a[low]>a[low+1])
            {
                swap(a, low, low+1);
                printf("low:%d, high:%d\n", low, high);
            }
            bubble(a, low+1, high);
        }
        bubble(a,low, high-1);
    }
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