#include <stdio.h>

int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  if(num%2){
    printf("the given number is odd\n");
  }else
  {
    printf("the given number is even\n");
  }
}