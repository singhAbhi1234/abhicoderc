#include <stdio.h>

int main(){
  FILE *file=fopen("data.txt","r+");
  if(file==NULL){
    printf("File not opened sccessfully\n");
    return 1;
  }

  char str[100];
fgets(str,100,file);
printf("reading from file\n %s",str);
fseek(file,0,SEEK_END);
fputs("this is c programming",file);

  

  fclose(file);
  file=NULL;
}