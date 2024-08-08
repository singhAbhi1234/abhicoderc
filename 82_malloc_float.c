#include <stdio.h>
#include <stdlib.h>

int main(){
float *p;
int i;
p=(float*)malloc(5*sizeof(float));
if(p==NULL){
  printf("Memory not created\n");
  return 1;
}
for ( i = 0; i < 5; i++)
{
  printf("Enter element number %d\n",i+1);
 scanf("%f",&p[i]);
}
for ( i = 0; i < 5; i++)
{
 printf("%.2f\n",p[i]);
}

free(p);
p=NULL;
}