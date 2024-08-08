#include <stdio.h>
#include <stdlib.h>


int main(){
char *arr;
arr=(char*)calloc(20,sizeof(char));
if(arr==NULL){
  printf("not enough space");
  return 1;
}
fgets(arr,20,stdin);
puts(arr);

free(arr);
arr=NULL;
}