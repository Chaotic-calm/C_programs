//to  convert decimal value into binary value.
#include<stdio.h>

int main()
{
    int a[1000],n,i;

    printf("enter decimal value");
    scanf("%d",&n);

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("binary value is \n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
