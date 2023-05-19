//c program to store the sum of two array elements into third array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int  a[5],b[5],c[5];      //array declaration
    int i;

    printf("enter the first array elements:\n");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);    //store value in array
        
    printf("enter the second array elements:\n");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);

    printf("printing elements..\n");    
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];       //read data from an array
        printf("[%d] : %d \n",i,c[i]);
    }
    return 0;
}