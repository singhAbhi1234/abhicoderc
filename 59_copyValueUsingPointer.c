#include <stdio.h>
void copyArray(char*,char*,int);
int main() 
{
int i,size;
char arr[10];
char newArr[10];
size=sizeof(arr)/sizeof(arr[0]);
printf("%d\n",size);
for(i=0;i<size;i++){
  printf("Enter the %d element\n",i+1);
  scanf(" %c",&arr[i]);
}
printf("The array is\n");
for(i=0;i<size;i++){
  printf("%c ",arr[i]);
}
copyArray(arr,newArr,size);
printf("\nThe copied array is\n");
for(i=0;i<size;i++){
  printf("%c ",newArr[i]);
}
}

void copyArray(char *p,char *q,int size){
  int i;
for( i=0;i<size;i++){
    *q=*p;
  q++;
  p++;
}
}
