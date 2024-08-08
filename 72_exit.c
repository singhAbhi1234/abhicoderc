#include <stdio.h>
#include <string.h>

int main(){

  char str[]="exit";
  char arr[20];
  
  
  while (1){
printf("Enter your string\n");
scanf("%s",arr);
if(strcmp(str,arr)){
  printf("String is not matched\n");
}else{
  printf("String is matched");
  break;
}

  }
  
}