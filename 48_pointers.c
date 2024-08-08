#include <stdio.h>
int main()
{
  int i;
  int *ptr;
  i=10;
  ptr=&i;
printf("the address of i is %p\n",&i);
printf("the address of i is %p\n",ptr);
  printf("the value of i is %d\n",i);
   printf("the value of i is %d\n",*(&i));
    printf("the value of ptr is %p\n",ptr);
   printf("the value of i is %d\n",*ptr);  
   printf("the address of ptr is %p\n",&ptr);
}