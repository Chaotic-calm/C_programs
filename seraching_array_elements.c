//to search and print array elements.
#include<stdio.h>

void  main()
{
    int i , n , a[100] , s , f=0;

    printf("Enter the number of elements:\n");
    scanf("%d" , &n);
 
    printf("Enter the elements \n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("Enter the element to be searched \n");
    scanf("%d" , &s);
    //Perform search operation
    for(i=0 ; i<n ; i++)
    {
        if(a[i]==s)
        {
            printf("%d is at %d position \n" , s , i) ;
            f = 1;
            break;
        }
    }
    if(f == 0)
    {
        printf("Element %d not found \n" , s );
    }
}