#include <stdio.h>
int main()
{
  int a,b,num,i=1;
  printf("Enter first number\n");
  scanf("%d",&a);
   printf("Enter second number\n");
  scanf("%d",&b);

  if(a>b){
    num=a;
  }else
  {
    num=b;
  }

  while(1){
    if(num*i%a==0 && num*i%b==0){
      num=num*i;
      break;
    }else{
      i++;
    }
  }
  printf("LCM is %d",num);
}