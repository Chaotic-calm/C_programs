//program to convert alphabet lowercase to uppercase and vice versa.
#include<stdio.h>
 
int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch<=90)
    {
        ch=ch+32;
        printf("%c",ch);

    }
    else if(ch>=97||ch<=122)
    {
        ch=ch-32;
        printf("%c",ch);

    }
    return 0;
}
 