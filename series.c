#include<stdio.h>
int main()
{
    int a,b;
    a=2; b=3;
    
   t:
    printf("%d",a);
    a=a+b;
    b=b+2;
    while(a<51)
    {
        printf(",");
        goto t;

    }
    return 0;
}