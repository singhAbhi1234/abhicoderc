#include <stdio.h>
#include <conio.h>
int main()
{
	
	printf("%d",add(10));
	return 0;
	
}

int add(int a)
{
	int n;
	if(a>0)
	n=a+add(a-1);
	return n;
}


/*int main()
{
int a=0;
	int i;
	int n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a+i;
	}
	printf("the sum of first %d natural numbers is %d",n,a);
}*/
