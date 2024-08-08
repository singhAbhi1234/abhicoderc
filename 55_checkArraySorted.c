#include <stdio.h>
#include <stdbool.h>

bool isIncreasing(int*,int);
bool isDecreasing(int*,int);

int main() 
{
int i,arr[10],size;
size=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<size;i++){
  printf("Enter the %d element\n",i+1);
  scanf("%d",&arr[i]);
}
if(isIncreasing(arr,size)||isDecreasing(arr,size)){
  printf("The array is sorted\n");
}else{
   printf("The array is not sorted\n"); 
}
}

bool isIncreasing(int arr[],int size){
int i,min=arr[0];
for(i=1;i<size;i++){
if(arr[i]>=min){
  min=arr[i];
}else{
  return false;
}

}
return true;
}

bool isDecreasing(int arr[],int size){
int i,max=arr[0];
for(i=1;i<size;i++){
if(arr[i]<=max){
  max=arr[i];
}else{
  return false;
}

}
return true;
}