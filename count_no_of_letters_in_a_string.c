#include<stdio.h>
#include<string.h>
main()
{
    char str[30];
    int i,count=0;
    
    printf("enter a string");
    gets(str);          //read and stores input in array
    puts(str);          //writes the string to output

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!= ' ')
        {
            count++;     //increment if letter found
        }
    }
    printf("the no of character are: %d",count);
        
    return 0;
}