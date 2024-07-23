#include <stdio.h>

int main()
{
  int number;
  printf("Enter the number\n");
  scanf("%d",&number);
  printf("the remaining number after eliminating last digit is:%d\n",number/10);
}