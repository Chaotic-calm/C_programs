#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("series.c","r");
    if(fp==NULL)
    {
        printf("error");
        getch();
        exit(0);
    }
    while(1)
    {
        ch=fgetc(fp);
    if(ch==EOF)
    {
        break;
    }
    printf("%c",ch);
    }
    fclose(fp);
    getch();
    return 0;
}

