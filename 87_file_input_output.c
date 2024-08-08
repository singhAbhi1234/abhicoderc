#include <stdio.h>

int main(){
  FILE *p;

  //open the file
  p=fopen("abhi1.txt","w");
  if(p==NULL){
    printf("File not opened sccessfully\n");
    return 1;
  }

  //reading the existing file
  //by fgets
//   char arr[100];
//  fgets(arr,100,p);
//  puts(arr);
 //by fgetc
 char c;
 do{
 c=fgetc(p);
  printf("%c",c);
 }while(c!=EOF);

 //writing in file
fprintf(p,"my name is abhi coder\n");

//close the file
  int result=fclose(p);
  if(result==EOF){
    printf("File not closed sccessfully\n");
    return 1;
  }
  p=NULL;
}