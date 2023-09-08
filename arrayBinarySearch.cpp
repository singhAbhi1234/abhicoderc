#include <stdio.h>
int arrayBinarySearch(int* ,int ,int ,int  );

 
 int arrayBinarySearch(int arr[],int l,int r,int x )
{
	
	 while(l<=r){
	 	 int m=l+(r-l)/2;
	 	if(arr[m]==x)
	 		return m;
	 		
		 if(arr[m]>x)
		 	r=m-1;
		 
		   if (arr[m]<x)
		 	l=m+1;
		 
		
		 
		 	
		 
	 }
	 
	return -1;
}

main(){
	
	int arr[]={10,20,35,40,55,60,80,90};
	int n= sizeof(arr)/sizeof(arr[0]);
int result=	arrayBinarySearch(arr, 0,n-1,80);
if(result==-1){

printf("Element is not present in this array\n");
}
else
	printf("the element present in array at index %d\n",result);
	
}


/*int arrayBinarySearch(int arr[],int l,int r,int x)
{
	if(l<=r){
	
	int m=l+(r-l)/2;
	if(arr[m]==x)
	
	return m;
else if(arr[m]>x)
	return arrayBinarySearch(arr,0, m-1, x);
	else

	return arrayBinarySearch( arr, m+1, r, x);
}
return -1;
	
}

main(){
	
	int arr[]={10,20,35,40,55,60,80,90};
	int n= sizeof(arr)/sizeof(arr[0]);
int result=	arrayBinarySearch(arr, 0,n-1,10);
if(result==-1){

printf("Element is not present in this array\n");
}
else
	printf("the element present in array at index %d\n",result);
	
}*/




