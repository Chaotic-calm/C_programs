#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n,j,temp;

    printf("enter the size of an array");
    scanf("%d",&n);
    int arr[n];
    
    //storing the value in array
    printf("enter the element in the array");    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}