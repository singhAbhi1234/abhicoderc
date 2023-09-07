//write a program to add two numbers
#include <stdio.h>
#include <conio.h>
main()
{
	double a,b,c;
	printf("Enter two numbers\n");
	scanf("%lf%lf",&a,&b);
	c=a+b;
	printf("the sum of %lf and %lf is %lf ",a,b,c);
	getch();
}
