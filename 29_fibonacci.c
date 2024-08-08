#include <stdio.h>

int main(){
  int num,a=0,b=1,temp;
  printf("Enter the number\n");
  scanf("%d",&num);
  printf("%d\n",a);
  printf("%d\n",b);
  while (a+b<=num)
  {
    temp=a+b;
    a=b;
    b=temp;
printf("%d\n",temp);
  
  }
  
}