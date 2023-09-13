#include <stdio.h>
#include <string.h>

union un{
	int a;
	char b;
	char s[20];
};

main()
{
	union un var1;
	
	var1.b='S';
	strcpy(var1.s,"abhi");
	var1.a=20;
	printf("%d\n%c\n%s",var1.a,var1.b,var1.s);
}
