#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int *p=(int*)calloc(10,sizeof(int));
  if(p==NULL){
    printf("memory allocation failed\n");
    return 1;
  }
  int i;
srand(time(NULL)); //seeding random number with time
  for(i=0;i<10;i++){
  p[i]=rand()%100;  //0-99
  }

  for(i=0;i<10;i++){
 printf("%d ",p[i]);
  }

  int *arr=(int*)realloc(p,5*sizeof(int)); 
  if(arr==NULL){
    printf("memory allocation failed\n");
    free(p);
    p=NULL;
    return 1;
  }
printf("\n");
  p=arr;
  for(i=0;i<5;i++){
 printf("%d ",p[i]);
  }

  free(p);
  p=NULL;
arr=NULL;


}