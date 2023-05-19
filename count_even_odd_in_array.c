//c program to count the number of even amd odd numbers in am array.
#include<stdio.h>
 
int main()
{
    int a[7];                 //array declarartion
    int even=0,odd=0;
    int n,i;
     
    printf("enter the size of array");   
    scanf("%d",&n);           //storing the size of the array

    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);    //storing value in array

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;    //increment if element is divisible by 2
        }
        else
        {
            odd++;     //increment if element is not divisible by 2
        }
    }
    printf("no of even no is : %d \nno of odd no is : %d",even,odd);
    return 0;
    
}