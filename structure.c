//C program to sort student based on score
#include <stdio.h>
#include <string.h>
 
struct Student {
    int rollNo;
    char name[20];
    char college[40];
    float score;
};

int main() {
    struct Student s[20],temp;
    int i,j,n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
   
    // Read student details
    for (i = 0; i < n; i++)
    {
        printf("Enter roll number ,name ,college, score of student %d:\n",i+1);
        scanf("%d %s  %s %f" , &s[i].rollNo, s[i].name,s[i].college, &s[i].score );
    }

    // Sort the students based on scores (merit) using a simple bubble sort
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (s[j].score < s[j + 1].score)
            {
                // Swap the students
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Print the sorted student details
    printf("\nStudent details (sorted by merit):\n");
    for ( j = 0; j < n; j++) 
    {
        printf(" %d\t %s\t%s\t%f", s[j].rollNo,s[j].name,s[j]. college,s[j].score);
        printf("\n");
    }

 
    return 0;
}

 
 




