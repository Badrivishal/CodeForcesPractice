// No of consonents in a string using recursion

#include<stdio.h>
#include<string.h>

int func(char* s, int a, int i)
{
    if(a==strlen(s))
    {
        return i;
    }
    else if(!(s[a]=='a' || s[a]=='e' || s[a]=='i' || s[a]=='o' || s[a]=='u' || s[a]=='A' || s[a]=='E' || s[a]=='I' || s[a]=='O' || s[a]=='U'))
    {
        func(s, a+1, i+1);
    }
    else
    {
        func(s, a+1, i);
    }
}

int main()
{
    char s[100];
    scanf("%s", s);

    printf("%d", func(s, 0, 0));

    return 0;
}