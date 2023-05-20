//a basic calculator
#include<stdio.h>
int main()
{

int no,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,input;
print:
printf("\n01=add\n 2=sub\n 3=mul\n 4=div\n 5=diff\n 6=square\n 7=cube \n 8=even/odd\n 9=positive/negative\n enter your choice\n");
scanf("%d",&no);
if(no==1)
{
  printf("enter two numbers\n");
  scanf("%d %d",&n1,&n2);
  printf("n1+n2:%d",n1+n2);
}
else if(no==2)
{
  printf("enter two numbers\n");
  scanf("%d %d",&n3,&n4);
  printf("n3-n4:%d",n3-n4);
}
else if(no==3)
{
  printf("enter two numbers\n");
  scanf("%d %d",&n5,&n6);
  printf("n5*n6:%d",n5*n6);
}
else if(no==4)
{
  printf("enter two numbers");
  scanf("%d %d",&n7,&n8);
  printf("n7/n8:%d",n7/n8);
}
else if(no==5)
{
  printf("enter two numbers");
  scanf("%d %d",&n9,&n10);
  if(n9>n10)
  printf("n9-n10:%d",n9-n10);
  else
  printf("n10-n9:%d",n10-n9);
}
else if(no==6)
{
  printf("enter a number");
  scanf("%d",&n11);
  printf("n11*n11:%d",n11*n11);
}
else if(no==7)
{
  printf("enter a number");
  scanf("%d",&n12);
  printf("n12*n12*n12:%d",n12*n12*n12);
}
else if(no==8)
{
  printf("enter a number");
  scanf("%d",&n13);
  if(n13%2==0)
  printf("even");
  else
  printf("odd");
}
else if(no==9)
{
  printf("enter a number");
  scanf("%d",&n14);
  if(n14>=0)
  printf("positive");
  else
  printf("negative");
}
 printf("\npress 1 for retry or 0 for exit");
  scanf("%d",&input);
  if(input==0)
  {
  return 0;
  }
  else if(input==1)
  {
  goto print;
  }
 
return 0;
}