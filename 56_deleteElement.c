#include <stdio.h>
void deleteElement(int*,int,int,int*);
int main() 
{
int i,arr[10],size,element,newSize;
size=sizeof(arr)/sizeof(arr[0]);
newSize=size;
printf("%d\n",newSize);
for(i=0;i<size;i++){
  printf("Enter the %d element\n",i+1);
  scanf("%d",&arr[i]);
}
printf("Enter the element you want to delete\n");
scanf("%d",&element);
printf("Array before delete an element is:\n");
for(i=0;i<size;i++){
  printf("%d ",arr[i]);
}
deleteElement(arr,size,element,&newSize);
printf("\nArray After delete an element is:\n");
for(i=0;i<newSize;i++){
  printf("%d ",arr[i]);
}
}

void deleteElement(int arr[],int size,int element,int *newSize){
int i,j;
for(i=0;i<size;i++){
  if(arr[i]==element){
    for(j=i;j<size-1;j++){
      arr[j]=arr[j+1];
      
    }
    i--;
  *newSize=*newSize-1;
   
  }
}
}