#include<stdio.h>

#define SIZE 5

int Merge_sort(int* , int, int, int);
int partition(int*, int, int);

void print_arr(int*);
void print_arr_driver(int*, int);

int main()
{
    int a[50];
    int i, size;
    int inv_count = 0;
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", a+i);
    }
    inv_count = partition(a, 0, SIZE-1);
    print_arr(a);
    printf("inv_count:%d\n", inv_count);

}

int partition(int*a, int low, int high)
{
    int mid, val = 0;
    if(low < high)
    {
        mid = (low + high)/2;
        val = partition(a, low, mid);
        val += partition(a, mid+1, high);
        val += Merge_sort(a, low, mid, high);
    }
    return val;
}

int Merge_sort(int*a, int low, int mid, int high)
{
    int i, mi, k, lo, temp[50];
    int inv_count = 0;
    lo = low;
    i = low;
    mi = mid+1;
    while((lo <= mid) && (mi <= high))
    {
        if(a[lo] <= a[mi])
        {
            temp[i] = a[lo];
            lo++;
        }
        else
        {
            temp[i] = a[mi];
            inv_count = inv_count + (mid -lo) + 1;
            mi ++;
        }
        i++;
    }
    if(lo>mid)
    {
        for(k=mi;k<=high;k++)
        {
            temp[i] = a[k];
            i++;
        }
    }
    else
    {
        for(k=lo;k<=mid;k++)
        {
            temp[i] = a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++)
    {
        a[k] = temp[k];
    }

    return inv_count;
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
