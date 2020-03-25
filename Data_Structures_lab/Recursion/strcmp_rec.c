// strcmp function using recursion
// Enter n, Enter n strings, output: sorted strings in lexicographic order

#include<stdio.h>
#include<string.h>

int str_cmp(char* a, char* b)
{
    if (*a == '\0' && *b == '\0')
    {
        return 0;
    }
    else if(*a == '\0')
    {
        return 1;
    }
    else if(*b == '\0')
    {
        return -1;
    }
    else if (*a > *b)
    {
        return -1;
    }
    else if(*a < *b)
    {
        return 1;
    }
    else
    {
        str_cmp(a+1, b+1);
    }
}

void swap(char * a, char * b)
{
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main()
{
    int i, n;
    char a[10][100];
    // char* b[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%s", a[i]);
    }
    // scanf("%s", b);
    // printf("%d", str_cmp(a, b));

    int swap_c;
    int j, flag = 0;
    for(j=0;j<n && flag == 0;j++)
    {
        swap_c = 0;
        for(i=0;i<n-1;i++)
        {
            if(str_cmp(a[i], a[i+1])<0)
            {
                swap(a[i], a[i+1]);
                swap_c++;
            }
        }
        if(swap_c == 0)
        {
            flag = 1;
        }
    }
    // swap(a[1], a[2]);

    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%s\n", a[i]);
    }

    return 0;
}