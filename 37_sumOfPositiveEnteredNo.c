#include <stdio.h>

int main(){
  int num,sum=0;
 while(1){
  printf("Enter the number\n");
  scanf("%d",&num);
  if(num==-1){
break;
  }else if(num<=0){
continue;
  }else{
    sum+=num;
  }

 }
 printf("sum of all positive number is %d",sum);
  
}