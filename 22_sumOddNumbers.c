#include <stdio.h>

int main()
{
  int num,sum=0,i=1;
  printf("Enter the number till you want to add all odd numbers\n");
  scanf("%d",&num);
while (i<=num)
{
  sum=sum+i;
  i+=2;
  
}
printf("the sum is %d",sum);

}