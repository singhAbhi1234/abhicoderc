#include <stdio.h>

int main()
{
  int a,b,c,d;
  printf("Enter the coefficient of X^2\n");
  scanf("%d",&a);
  printf("Enter the coefficient of X\n");
  scanf("%d",&b);
  printf("Enter the constant term\n");
  scanf("%d",&c);

  if(b*b-4*a*c==0){
    printf("Roots are Real and Equal\n");
  }else if(b*b-4*a*c>0){
 printf("Roots are Real but Distinct\n");
  }else{
     printf("Roots are Imaginary\n");
  }

}