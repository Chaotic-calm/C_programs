#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,c;
    printf("enter the name");
    gets(s);
    printf("the name is :");
    puts(s);
    printf("%c",s[0]);
    for(i=1;i<strlen(s);i++)
    {
        if(s[i] == ' ')
        {
            printf("%c",s[i+1]);
            c=i;
        }
    }
    for(c=c+2;c<=strlen(s);c++)
    {
        printf("%c",s[c]);
    }
    return 0;
}