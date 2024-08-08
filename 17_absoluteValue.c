#include <stdio.h>
int main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
num>=0?printf("the absolute value is %d",num):printf("the absolute value is %d",(-num));
}