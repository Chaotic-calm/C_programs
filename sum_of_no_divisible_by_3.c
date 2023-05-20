//c program to print the sum of the numbers divisible by 3 between the numbers whichare taken input from the user from 1-100.
#include<stdio.h>
int main()
{
    int x,y,i,sum,input,number;
    print:
    printf("enter two numbers between 1-100\n");
    scanf("%d",&x);
    scanf("%d",&y);
    sum=0;
    if((x>1)&&(x>100)&&(y>1)&&(y>100))
    {
        printf("invalid input\n");
        goto print;
    }
    for (i=x;i<=y;i++)
    {
        if(i%3==0)
        {
            sum+=i;
        }
    }
    printf("sum is :%d",sum);

    printf("\npress 1 for retry or 0 for exit");
    scanf("%d",&input);
    if(input==0)
    {
        return 0;

    }
    else if(input==1)
    {
        goto print;

    }
  
    return 0;
}
