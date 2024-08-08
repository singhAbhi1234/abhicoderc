#include <stdio.h>

int main(){
  FILE *file=fopen("userInput.txt","w");
  if(file==NULL){
    printf("File not opened sccessfully\n");
    return 1;
  }

  char str[100];
  while(1){
    printf("Please Enter text to be written in file\n");
    fgets(str,100,stdin);
    if(strcmp(str,"exit\n")==0) break;
    fputs(str,file);
  }

  fclose(file);
  file=NULL;
}