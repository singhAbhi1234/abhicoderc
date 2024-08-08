#include <stdio.h>

int main()
{
  int a,b,i;
  printf("Enter first number\n");
  scanf("%d",&a);
   printf("Enter second number\n");
  scanf("%d",&b);


  i=a>b?b:a;

  for(i;i>=1;i--){
    if(a%i==0 && b%i==0){
      break;
    }
  }
  printf("GCD is %d",i);
}