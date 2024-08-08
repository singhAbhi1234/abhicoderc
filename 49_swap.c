#include <stdio.h>
void swap(int*,int*);
int main()
{
  int x=10;
  int y=20;
  printf("the value of x and y is:%d and %d\n",x,y);
  swap(&x,&y);
  printf("the value of x and y is:%d and %d\n",x,y);
}

void swap(int *ptr1,int *ptr2)
{
int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("the value of x and y is:%d and %d\n",*ptr1,*ptr2);
}