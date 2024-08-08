#include <stdio.h>
void merge(int [],int,int [],int,int [],int );

int main(){
  int i,size1,size2;
  int arr1[]={12,24,56,78,89,98,99};
  int arr2[]={10,23,45,53,56,79,87};
  size1=sizeof(arr1)/sizeof(arr1[0]);
  size2=sizeof(arr2)/sizeof(arr2[0]);
  int size=sizeof(arr1)/sizeof(arr1[0])+sizeof(arr2)/sizeof(arr2[0]);
  int newArr[size];

  merge(arr1,size1,arr2,size2,newArr,size);

  printf("The new array is \n");
  for(i=0;i<size;i++){
    printf("%d ",newArr[i]);
  }

}

void merge(int arr1[],int size1,int arr2[],int size2,int newArr[],int size){
  int i,j=0,k=0;

  for(i=0;i<size;i++){
//  if(j==size1){
//   newArr[i]=arr2[k++];
//  }else if(k==size2){
//   newArr[i]=arr1[j++];
//  }else if(arr1[j]<arr2[k]){
//   newArr[i]=arr1[j++];
//  }else{
//    newArr[i]=arr2[k++];
//  }

if((k==size2)||(j<size1 && arr1[j]<arr2[k])){
newArr[i]=arr1[j++];
}else{
  newArr[i]=arr2[k++];
} 
  }
}