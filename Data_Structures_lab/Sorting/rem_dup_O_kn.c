// O(kn) algo for removing duplicates

#include<stdio.h>
#include<stdlib.h>


int Rem_Dup(int*, int);

void print_arr(int*, int);
void print_arr_driver(int*, int, int);

int main()
{
    int i, len = 10;
    int arr[10];
    for(i=0;i<10;i++)
    {
        scanf("%d", arr+i);
    }

    print_arr(arr, len);

    len = Rem_Dup(arr, len);

    print_arr(arr, len);

    return 0;
}


int Rem_Dup(int* a, int size)
{
    int reader, writer, temp, flag;
    writer = 1;
    flag = a[0];
    for(reader = 1;reader<size; reader++)
    {
        for(temp = 1;temp<writer; temp++)
        {
            if(a[temp] == a[reader])
            {
                a[reader] = flag;
            }
        }
        if(a[reader]!= flag)
        {
            a[writer] = a[reader];
            writer ++;
        }
    }
    size = writer;
    return writer;
}

void print_arr_driver(int* arr, int i, int len)
{
    if(i == len)
    {
        printf("\n");
        return;
    }
    else
    {
        printf("%d ", *arr);
        print_arr_driver(arr+1, i+1, len);
    }
}

void print_arr(int* arr, int len)
{
    print_arr_driver(arr, 0, len);
}
