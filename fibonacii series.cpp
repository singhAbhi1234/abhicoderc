//write a program to print fibonacii series

#include <stdio.h>
#include <conio.h>
   
 /* int n;
int a=0,b=1;
  void fibonaciiSeries()
  {
     
	
	if(n>0){
	
printf(" %d %d ", a, b);
a=a+b;
b=a+b;
n=n-1;
fibonaciiSeries();

}
}
 int main()
 {
	printf("Enter a number\n");
	scanf("%d",&n);
	fibonaciiSeries();

}*/


/*	int n1=0,n2=1,n3;

  void fibonaciiSeries(int n)
  {
     
	
	if(n>0){
		n3=n1+n2;
n1=n2;
n2=n3;
printf(" %d",n3);
fibonaciiSeries(n-1);

}
}
 int main()
 {
 	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf(" %d %d ", 0, 1);
	fibonaciiSeries(n-2);

} */


//without recursion
/* main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	int a=0,b=1,i;
	for(i=1;i<=n/2;i++)
	{
		printf("%d\n",a);
        printf("%d\n",b);
a=a+b;
b=a+b;	
	}
	
}*/

/*int main()
 {
 	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf(" %d %d ", 0, 1);
	int n1=0,n2=1,n3,i;
	for(i=1;i<=n-2;i++)
	{
		n3=n1+n2;
	
		printf(" %d",n3);
			n1=n2;
		n2=n3;
	}
}*/
