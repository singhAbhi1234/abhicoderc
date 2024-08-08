# include <stdio.h>
int sum(int [][4],int,int ,int );
int main()
{
    int i,j;
  int rows,col,addition;
 
  printf("Enter number of rows\n");
  scanf("%d",&rows);
  col=rows;
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
addition=sum(arr,rows,col,size);
printf("\nThe sum of the diogonals of array is %d\n",addition);
}

int sum(int arr[][4],int rows,int col,int size){
  int i=0,j=0,sum=0;
if(rows%2==0){
while(i<rows){
  sum+=arr[i][j]+arr[i][rows-j-1];
i++;
j++;
}
   return sum;
  }else{
    while(i<rows){
  sum+=arr[i][j]+arr[i][rows-j-1];
i++;
j++;
  }
return (sum-(arr[rows/2][col/2]));
}
}
