// Prints first capital letter in the string

#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char a[100];

    scanf("%s", a);

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            printf("%c", a[i]);
            break;
        }
    }
    return 0;
}