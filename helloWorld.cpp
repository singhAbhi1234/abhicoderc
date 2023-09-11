/*write hello world program 
with different escape seqences*/
#include <stdio.h>
#include <conio.h>
main()
{
	printf("hello world\n"); //new line
	printf("hello\t world\n"); //horizontal tab
	printf("hello\b\bxx world\n");  //backspace
	printf("hello\\ world\n");  //backslash
	printf("\"hello world\"\n");  //double quote
	printf("\'hello world\'\n");  // single quote
	printf("hello\r world\n"); //carriage return
	printf("hello\v world\n"); //vertical tab
	
}
