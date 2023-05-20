 //program to find the nearest number divisible by 7. 
#include<stdio.h>
int main()
{
    int n,a,b;
    printf("enter a no\n");
    scanf("%d",&n);

    if(n%7==0)
    {
        printf("%d is divisible by 7");
    }
    else if(n%7<3)
    {
        n=n-n%7;
        printf("%d",n);
    }
    else
    {
        n=n+(7-n%7);
        printf("%d",n);
    }
    return 0;
  }