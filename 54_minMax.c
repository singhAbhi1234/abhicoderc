#include <stdio.h>
void minMax(int [],int ,int*,int*);
int main() 
{
int i,arr[10],size;
int min=arr[0],max=arr[0];
size=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<size;i++){
  printf("Enter the %d element\n",i+1);
  scanf("%d",&arr[i]);
}
minMax(arr,size,&min,&max);
printf("The min and max of the array is %d and %d\n",min,max);
}

void minMax(int arr[],int size,int *min,int *max){
  int i;
  for(i=1;i<size;i++){
    if(arr[i]>*max){
      *max=arr[i];
    }
    if(arr[i]<*min){
      *min=arr[i];
    }
  }
}