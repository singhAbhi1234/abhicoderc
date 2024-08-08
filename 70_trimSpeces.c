#include <stdio.h>
#include <string.h>


int main(){
  char str[100];
  char arr[100];
  
  printf("enter the string\n");
  fgets(str,100,stdin);
  int size=strlen(str);
  
int i=0,j=size,k=0;
while(str[i]==' '){
  i++;
}
while(str[j-1]==' '|| str[j-1]=='\n'){
  j--;
}
while(i<=j){
  if(str[i]==' '){
    arr[k]='-';
  }else{
    arr[k]=str[i];
  }

  i++;
  k++;
  
}
arr[k]=='\0';
puts(arr);

}

