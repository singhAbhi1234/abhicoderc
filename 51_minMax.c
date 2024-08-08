#include <stdio.h>
void minMax(int*,int*,int*,int*);


int main()
{
  int a,b,min,max;
  printf("Enter first number\n");
  scanf("%d",&a);
  printf("Enter second number\n");
  scanf("%d",&b);

minMax(&a,&b,&min,&max);
printf("The min and max is %d and %d",min,max);
}

void minMax(int *a,int *b,int *min,int *max)
{
if(*a>*b){
  *max=*a;
  *min=*b;
  
}else{
  *min=*a;
   *max=*b;
}
}