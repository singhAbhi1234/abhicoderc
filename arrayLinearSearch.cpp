#include <stdio.h>
#include <conio.h>

int linearSearch(int ,int ,int );

//Linear search

 int linearSearch(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
		return -1;

}
 main()
 {
 	int arr[]={50,45,60,90,55,80};
 	int n=sizeof (arr)/sizeof (arr[0]);
 	
 int result=linearSearch( arr, n, 50);
// printf("\n%d",result);
 	if(result==-1){
 	printf("Element is not present in this array\n");
 }
 else
 	printf("Element is present in this array at index %d\n",result);
 	
	 }
	 
	 //sentinel linear search
	 
	/* int sentinelLinearSearch(int arr[],int n,int x)
	 {
	 	int last=arr[n-1];
 	arr[n-1]=x;
 	int i;
	 	while(arr[i]!=x)
	 	i++;
	 	
	 	arr[n-1]=last;
	 	if(i<n-1||arr[n-1]==x){
	 		printf("Element is present in this array at index %d\n",i);
	 		
		 }
		 else 
		 printf("Element is not present in this array\n");
		 
	 	
	 }
	 
	 main()
	 {
	 		int arr[]={50,45,60,90,55,80};
 	int n=sizeof (arr)/sizeof (arr[0]);
 	
 	int x=90;
 	 sentinelLinearSearch( arr, n, x);
 	
	 	
	 }*/
	 
 
