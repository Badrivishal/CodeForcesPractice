// 3-way quicksort using dutch national flag algorithm

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

void d_qsort(int* , int, int);
void swap(int * , int , int );
int partition(int* , int, int);


void print_arr(int*);
void print_arr_driver(int*, int);

int main()
{
    int i, len = 10;
    // int arr[10];
    // for(i=0;i<10;i++)
    // {
    //     scanf("%d", arr+i);
    // }

    int arr[10] = {12,21,22,10,32,21,12,3,30,21};
    int n = 10;

    printf("in\n");
    print_arr(arr);

    d_qsort(arr, 0, n-1);
    // partition(arr,0,n-1);


    printf("out\n");
    print_arr(arr);

    return 0;
}

void d_qsort(int* a, int start, int end)
{
    int j, r;
    r = partition(a, start, end);
    if(r==-1)
    {
        return;
    }
    else
    {
        // print_arr(a);
        // printf("%d %d\n", start, end);
        d_qsort(a, start, r);
        d_qsort(a, r+1, end);
    }
}

int partition(int* a, int start, int end)
{   
    int lo, mid, hi, pivot;
    pivot = start;
    lo = start+1;
    mid = start+1;
    hi = end;

    // printf("pivot:%d\n", a[pivot]);

    if(start >= end)
    {
        return -1;
    }
    
    while(mid<=hi)
    {
        if(a[mid]< a[pivot])
        {
            swap(a, lo, mid);
            // print_arr(a);
            // printf("low: %d mid: %d\n", lo, mid);
            lo ++;
            mid ++;
        }
        else
        {
            if(a[mid]==a[pivot])
            {
                mid++;
            }
            else
            {
                swap(a, mid, hi);
                // print_arr(a);
                // printf("mid: %d hi: %d\n", mid, hi);
                hi--;
                // mid++;
            }
            
        }
        
    }
    // print_arr(a);
    int temp;
    temp = a[pivot];
    a[pivot] = a[lo-1];
    a[lo-1] = temp;
    // printf("lo %d piv %d hi %d\n", lo, mid, hi);
    return lo-1;

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

