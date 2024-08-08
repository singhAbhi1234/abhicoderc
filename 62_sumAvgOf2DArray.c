# include <stdio.h>
int add(int [][4],int,int,int);
int main()
{
    int i,j;
  int rows,col;
  float  sum;
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
printf("The array is\n");

for(i=0;i<rows;i++){
  for(j=0;j<col;j++){
    printf("%d ",arr[i][j]);
   
  }

}
sum=add(arr,rows,col,size);
printf("\nThe sum of the array is %f\n",sum);
printf("The average of the array is %f\n",sum/size);
}

int add(int arr[][4],int rows,int col,int size){
int i,j;
float sum=0;
for(i=0;i<rows;i++){
  for(j=0;j<col;j++){
    sum+=arr[i][j];
  }
  
}
return sum;
}