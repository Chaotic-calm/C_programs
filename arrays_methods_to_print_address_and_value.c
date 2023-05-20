//program to print address and value by different methods
#include<stdio.h>

int main()
{
    int arr[]={34,9,7};
    int *arrayptr=arr;
    printf("%d\n",*arrayptr);     //print value at index 0
    printf("%d\n",*(&arr[0]));    //print value at index 0
    printf("%d\n",*(arr));        //print value at index 0

    printf("%d\n",arrayptr);      //print address of value at 0
    printf("%d\n" ,arr);          //print address of value at 0
    printf("%d\n" ,&arr[0]);      //print address of value at 0
    printf("%d\n" ,arr+1);        //print address of value at 1
    printf("%d\n" ,&arr[1]);      //print address of value at 1

    arrayptr++;                   //increment in arrayptr
    printf("%d\n",arrayptr);      //print address of value at 1 after increment 
    printf("%d\n",*(&arr[1]));    //prints the value at address 1
    printf("%d\n",*arrayptr);     //print the value at index 1
    printf("%d\n",*(arr+1));      //print the value at index 1
    


    return 0;
}
 
