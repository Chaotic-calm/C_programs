//program to print sum of digits in a number.
#include<stdio.h>
int main()
{
    int remainder,n;
    printf("enter any number:\n");
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("sum of digits is : %d",sum);

    return 0;
}