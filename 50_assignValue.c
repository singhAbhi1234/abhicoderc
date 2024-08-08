#include <stdio.h>

int main()
{
  int num=5;
  int *ptr=&num;
  printf("Enter the number\n");
  scanf("%d",ptr);
  printf("the value of num is:%d \n",*ptr);
  printf("the value of num is:%d \n",num);
}