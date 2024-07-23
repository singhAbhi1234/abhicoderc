#include <stdio.h>

int main()
{
  int a=10;
  int b=20;
  //before swapping
  printf("before swapping value of a=%d\n",a);
  printf("before swapping value of b=%d\n",b);
  //swapping
  int temp=a;
  a=b;
  b=temp;
  //after swapping
    printf("after swapping value of a=%d\n",a);
  printf("after swapping value of b=%d\n",b);

}