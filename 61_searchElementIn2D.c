#include <stdio.h>
int search(int [][3],int,int,int,int);
int main(){
  int i,j;
  int rows,col,element;
  printf("Enter number of rows\n");
  scanf("%d",&rows);
  printf("Enter number of columns\n");
  scanf("%d",&col);
int arr[rows][col];
int size=rows*col;
printf("Enter the elements in 2D array\n");
for(i=0;i<rows;i++){
  for(j=0;j<col;j++){
    printf("Enter the element [%d][%d] \n",i,j);
    scanf("%d",&arr[i][j]);
  }

}
printf("Enter the element which you want to search\n");
scanf("%d",&element);
int count=search(arr,rows,col,size,element);
printf("The element %d found in array %d times\n",element,count);

}

int search(int arr[][3],int rows,int col,int size,int element){
int count=0;
int i,j;
for(i=0;i<rows;i++){
  for(j=0;j<col;j++){
if(arr[i][j]==element){
  count++;
}
  }
}
return count;

}