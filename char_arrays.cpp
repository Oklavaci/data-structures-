#include <stdlib.h>
#include <stdio.h>

void myPrint (char* c){
	while(*c != '\0')
	{
		printf("%c", *c );
		c++;
	}
	printf("\n");
}

int main()
{
	char C[20]="Hello";	
	myPrint(C);
	
	return 0;
}
