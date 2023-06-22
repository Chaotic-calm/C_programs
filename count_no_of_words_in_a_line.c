//To count the words in a line.
#include<stdio.h>

int main() 
{
	char str[100];
	int i=0,n=0;
	printf("Enter a line:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++) 
    {
		if(str[i]==' ')
			continue;
		else
		    n++;
	}
	printf("The sentance contain %d words.",n);
 
	return 0;
}