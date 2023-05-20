 //program to convert celsius into farenhite.
#include<stdio.h>
float convert(float celsius);

int main()
{
  float farenhite,celsius;
  printf("enter temp: \n");
  scanf("%f",&celsius);
  farenhite= convert(celsius);
  printf("farenhite: %f",farenhite);
  return 0;    
     
 }
 float convert(float celsius)
 {
  float farenhite;
  farenhite= (celsius*9/5)+32;
  return farenhite;

 }