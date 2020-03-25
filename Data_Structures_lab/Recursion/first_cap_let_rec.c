// Prints first capital letter in the string using recursion

#include<stdio.h>
#include<string.h>

void fcl(char* a, int n)
{
    if(n==strlen(a))
        return;
    else if(a[n]>='A' && a[n]<='Z')
    {
        printf("%c", a[n]);
        return;
    }
    else
    {
        fcl(a, n+1);
    }
    
}

int main()
{
    int i;
    char a[100];

    scanf("%s", a);

    fcl(a, 0);

    return 0;
}