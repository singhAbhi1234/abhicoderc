#include <stdio.h>

int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  if(num==0){
    printf("the given number is zero");
  }
  if(num>0){
    printf("the given number is positive");

  }
  if(num<0){
       printf("the given number is negative");
  }
}