//write a program to print only last digit of a number 
#include <stdio.h>
#include <conio.h>
main()
{
	int a;
	int r;
	printf("Enter a number\n");
	scanf("%d",a);
	r=a%10;
	printf("the last digit of the number is %d",r);
}
