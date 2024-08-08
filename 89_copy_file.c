#include <stdio.h>

int main(){
  FILE *p1,*p2;

  //open the file
  p1=fopen("abhi.txt","r");
  if(p1==NULL){
    printf("File not opened sccessfully\n");
    return 1;
  }

   p2=fopen("abhi1.txt","w");
  if(p2==NULL){
    printf("File not opened sccessfully\n");
    return 1;
  }
char c;
do{
  c=fgetc(p1);
  fprintf(p2,"%c",c);

}while(c!=EOF);

fclose(p1);
fclose(p2);
p1=NULL;
p2=NULL;
}