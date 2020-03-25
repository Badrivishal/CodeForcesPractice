// strcpy function using recursion

#include<stdio.h>

void str_cpy(char* target, char* source)
{
    if(*source == '\0')
    {
        *target = '\0';
        return;
    }
    else
    {
        *target = *source;
        str_cpy(target + 1, source + 1);
    }
}


int main()
{
    char s[100];
    char t[100];
    scanf("%s", s);

    str_cpy(t, s);
    
    printf("s:%s t:%s", s, t);
    return 0;
}

