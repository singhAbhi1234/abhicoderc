#include <stdio.h>

int main()
{
  int num, sum=0,r,i;
  
  printf("Enter the number\n");
scanf("%d",&num);
i=num;
while(i>0){
  
r=i%10;
i=i/10;
sum=sum+r*r*r;
}

if(num==sum){
  printf("the given number is armstrong nmber\n");
}else{
  printf("the given number is not an armstrong nmber\n");
}

}