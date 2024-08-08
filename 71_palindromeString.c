#include <stdio.h>
#include <string.h>

void reverse(char*,int );

int main(){
  char str[100];
  char arr[100];
  
  int i;
  printf("enter the string\n");
 scanf("%s",str);
  strcpy(arr,str);
  int size=strlen(str);
  puts(str);
  reverse(str,size);
  puts(str);
  puts(arr);
if(strcmp(arr,str)){
  printf("String is not palindrome\n");
}else
  printf("String is palindrome\n");
}

void reverse(char *str,int size){
  int i;
  for(i=0;i<size/2;i++){
    char temp=str[i];
    str[i]=str[size-i-1];
    str[size-i-1]=temp;


  }

}