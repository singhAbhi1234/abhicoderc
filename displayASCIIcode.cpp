/*write a program which takes one charecter from keyboard using getch() function 
and display its ASCII code */
#include <stdio.h>
#include <conio.h>
main()
{
	char c;
	printf("Enter a charecter\n");
	c=getch();
	printf("the ASCII code of %c is %d",c,c);
}
