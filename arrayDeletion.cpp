#include <stdio.h>

/*int searchD_element(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x)
		return i;
	}
	return -1;
}

int deleteArray(int arr[],int n,int pos)
{
	int x;
	int i;
	for(i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}
}

 main()
 {
 	int arr[]={50,45,60,90,55,80};
 	int n=sizeof (arr)/sizeof (arr[0]);
 	
 int result=searchD_element( arr,n, 45);
 	if(result==-1){
 	printf("Element is not present in this array\n");
 }
 else
  deleteArray(arr,n,result);
  int i;
 for(i=0;i<n-1;i++){
 	printf("%d ",arr[i]);
 }
 
 	
	 }*/
	 
	 int searchDeletePosition(int arr[],int n,int l,int h,int x)
{
	while(l<=h){
		int m=(l+h)/2;
		if(arr[m]==x)
		return m;
		if(arr[m]>x){
		
		
		return searchDeletePosition(arr,n, l,m-1,x);
	}
		else
		return searchDeletePosition(arr,n, m+1,h, x);
	
}
	return -1;
}


int deleteElement(int arr[],int n,int pos)
{
	int i;
	for(i=pos;i<n-1;i++){
		arr[i]=arr[i+1];
	}

}

 main()
 {
 	int arr[]={50,45,60,90,55,80};
 	int n=sizeof (arr)/sizeof (arr[0]);
 	
 int result=searchDeletePosition(arr,n, 0,n-1,60);
// printf("%d",result);
 	if(result==-1){
 	printf("Element is not present in this array\n");
 }
 else{
 
 deleteElement(arr,n,result);
 int i;
 for(i=0;i<n-1;i++){
 	printf("%d ",arr[i]);
 }
}
}
 
