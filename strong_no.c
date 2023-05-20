//program to check strong number  
#include<stdio.h>
 
int main()    
{
    int no,d,sum=0,fact,a,i;
  
    printf("enter the number");
    scanf("%d",&no);
    a=no;
    while(no>0)
    {
        i=1,fact=1;
        d=no%10;
        for(i=1;i<=d;i++)
        {
            fact=fact*i;
        }
    sum=sum+fact;
    no=no/10;
    }
    if(sum==a)
    printf("%d is a strong number",a);
    else
    printf("%d is not a strong number",a);
    return 0;
}