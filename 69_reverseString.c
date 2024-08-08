#include <stdio.h>
#include <string.h>

void reverse(char*,int );

int main(){
  char str[11];
  char arr[]="abhishek";
  printf("%d",strlen(arr));
  int i;
  printf("enter the string\n");
  fgets(str,11,stdin);
  int size=strlen(str);
  printf("%d\n",size);
  puts(str);
  reverse(str,size);
  puts(str);


}

void reverse(char *str,int size){
  int i;
  for(i=0;i<size/2;i++){
    char temp=str[i];
    str[i]=str[size-i-1];
    str[size-i-1]=temp;


  }

}