#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    FILE *file;
    char *series;
    char line[100];
    
    if (argc<2) 
    {
        printf(" error");
        return 1;
    }
    
    series = argv[1];
    
    file = fopen("series.c", "w");
    if (file == NULL) 
    {
        printf("Error opening file %s\n", series);
        return 1;
    }
    
    printf("Enter lines of text (type 'exit' to quit):\n");
    
    while (1) 
    {
        gets(line);
        if (strcmp(line, "exit") == 0) 
        {
            break;
        }
        fprintf(file, "%s\n", line);
    }
    
    fclose(file);
    printf("File %s written successfully.\n", series);
    
    return 0;
}