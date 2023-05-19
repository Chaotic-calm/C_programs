//c program to take input and print 2d array elements.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,arr[3][3];
    //input array elements
    printf("enter elements");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    //print array elements
    printf("printing elements\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
           printf("%d\t",arr[i][j]);
        }
    }
    return 0;
}