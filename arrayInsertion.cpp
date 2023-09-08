#include <stdio.h>

//insert at last position

/*int insertArray(int arr[],int x,int n,int capacity)
{
	if(n>=capacity){
		return n;
		
	}
	return n+1;
}
main(){
	
	int arr[20]={10,20,35,40,55,60,80,90};
	int capacity= sizeof(arr)/sizeof(arr[0]);
//	printf("%d",capacity);
	int n=8;
	int x=100;
int result=	insertArray(arr,x,n,capacity);
	
	if(result==n){
		printf("array overflow");
	}
	else{
		arr[n]=x;
	int i;
	for(i=0;i<=n;i++)
	printf("%d  ",arr[i]);
}
}*/


// insert at any position
/*int insertArray(int arr[],int x,int n,int pos )
{ 
int i;
for(i=n-1;i>=pos;i--){
	arr[i+1]=arr[i];
	
}
arr[pos]=x;	
}

	main(){
	int arr[]={10,20,35,40,55,60,80,90};
	int n= sizeof(arr)/sizeof(arr[0]);
	int x=100;

	 insertArray(arr,x, n,3);
	int i;
	for(i=0;i<=n;i++)
	printf("%d  ",arr[i]);
}	*/

//insert in sorted array

int insertArray(int arr[],int x,int n,int capacity)
{
	if(n>=capacity)
		return n;
		
	
	int i;
	for(i=n-1;(i>=0 && arr[i]>x);i--){
	
	arr[i+1]=arr[i];
	
}
arr[i+1]=x;
	return n+1;
}
  main()
  {
	
	int arr[20]={10,20,35,40,55,60,80,90};
	int capacity= sizeof(arr)/sizeof(arr[0]);
	int n=8;
	int result=insertArray(arr,65, n, capacity);
		if(result==n){
		printf("array overflow");
	}
	else{

	int i;
	for(i=0;i<=n;i++)
	printf("%d  ",arr[i]);

}
}
	

	
	

	
