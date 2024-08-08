#include <stdio.h>

int main(){
  FILE *p;

  //open the file
  p=fopen("abhi2.txt","r");
  if(p==NULL){
    printf("File not opened sccessfully\n");
    return 1;
  }
int sum=0;
int temp;
while(fscanf(p,"%d",&temp)==1){
sum+=temp;
}
printf("The sum is:%d",sum);


//close the file
  int result=fclose(p);
  if(result==EOF){
    printf("File not closed sccessfully\n");
    return 1;
  }
  p=NULL;
}