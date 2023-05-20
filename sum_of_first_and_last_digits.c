//program to print sum of first and last digits
#include<stdio.h>
int main()
{
    int no,first,last,sum=0;
    printf("enter a number:\n");
    scanf("%d",&no);
    last=no%10;
    while(no>=10)
    {
        no=no/10;
        first=no;
        sum=first+last;
    }
    printf("sum of first and last digits:%d",sum);
    return 0;

 }