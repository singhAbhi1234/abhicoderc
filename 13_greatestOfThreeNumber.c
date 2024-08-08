#include <stdio.h>

int main()
{
  int a,b,c;
  printf("Enter first number\n");
  scanf("%d",&a);
  printf("Enter second number\n");
  scanf("%d",&b);
  printf("Enter third number\n");
  scanf("%d",&c);

if(a>b && a>c){
  printf("the greatest number is %d\n",a);
}else if(b>a && b>c)
{
  printf("the greatest number is %d\n",b);
}else{
  printf("the greatest number is %d\n",c);
}

}