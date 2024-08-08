#include <stdio.h>
/*int main()
{
  int num,i=2;
  printf("Enter the nmber\n");
  scanf("%d",&num);
   if(num<2){
        printf("Number is not prime\n");
   }else if(num==2){
printf("Number is prime\n");
   }else {
while(i<=num/2){
if(num%i==0){
  break;
}else
i++;
}
if(num%i==0){
    printf("Number is not prime\n");
}else
printf("Number is prime\n");
   }
   
}

*/

int main()
{
    int num,i=2;
  printf("Enter the nmber\n");
  scanf("%d",&num);

  for(i=2;i<=num/2;i++){
   if(num%i==0){
      printf("number is not prime\n");
      return 0;
   }
   
  }
  printf("Number is prime\n");
}
