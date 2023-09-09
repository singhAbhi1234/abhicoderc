#include <stdio.h>

/*int arrayTernarySearch(int * arr,int l,int r,int x)
{
	while(l<=r){
		int m1=l+(r-l)/3;
		int m2=r-(r-l)/3;
		
		if(arr [m1]==x){
		
		return m1;
	}
		if(arr[m2]==x){
		
		return m2;
	}
		if(arr[m1]>x){
		
		r=m1-1;
	}
	else if(arr[m2]<x){
		
		l=m2+1;
	}
	 else
		{
			l=m1+1;
			r=m2-1;
		}
	}
	return -1;
}

main(){
	
	int arr[]={10,20,35,40,55,60,80,90};
	int n= sizeof(arr)/sizeof(arr[0]);
int result=	arrayTernarySearch(arr, 0,n-1,55);
if(result==-1){

printf("Element is not present in this array\n");
}
else
	printf("the element present in array at index %d\n",result);
	
}*/


int arrayTernarySearch(int * arr,int l,int r,int x)
{
	if(l<=r){
	
	int m1=l+(r-l)/3;
		int m2=r-(r-l)/3;
		
		if(arr [m1]==x){
		
		return m1;
	}
		if(arr[m2]==x){
		
		return m2;
	}
		
		if(arr[m1]>x){
		return	arrayTernarySearch(arr,0,m1-1,x);
		}
	else if(arr[m2]<x){
		return arrayTernarySearch(arr,m2+1,r,x);
	}
	else{
	return	arrayTernarySearch(arr,m1+1,m2-1,x);
	}
}
return -1;	
}

main(){
	
	int arr[]={10,20,35,40,55,60,80,90};
	int n= sizeof(arr)/sizeof(arr[0]);
int result=	arrayTernarySearch(arr, 0,n-1,90);
if(result==-1){

printf("Element is not present in this array\n");
}
else
	printf("the element present in array at index %d\n",result);
	
}




