#include <stdio.h>

int main()
{
  int num,i=1;
  printf("Enter the number\n");
  scanf("%d",&num);
  while (i<=10)
  {
    printf("%d*%d=%d\n",num,i,num*i);
    i++;
  }
  
}