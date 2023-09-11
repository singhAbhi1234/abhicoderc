//write a program to check whether a given number is positive or non positive
#include <stdio.h>
#include <conio.h>
main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is a positive number",a);
	}
	else
	printf("%d is not positive number",a);
}
