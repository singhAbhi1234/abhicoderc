#include <stdio.h>

int main()
{
  int num,n,r,sum=0;
  printf("Enter the number\n");
  scanf("%d",&num);
while (num>0)
{
  r=num%10;
  num=num/10;
  sum+=r;


}
printf("sum of all digit is %d",sum);
}