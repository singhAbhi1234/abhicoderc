#include <stdio.h>

int main()
{
int num,sum=0;

do
{
  printf("Enter the number\n");
scanf("%d",&num);
sum+=num;
} while (num!=0);
printf("Sum of all numbers is %d",sum);

}