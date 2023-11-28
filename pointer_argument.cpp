#include <stdlib.h>
#include <stdio.h>

void IncrementByValue(int arg)	// here arg is a formal argument  (a copy of the actual argument)
{
	arg = arg + 1;
}

void IncrementByReference(int *arg) // here arg is address of the actual argument
{
	*arg = *arg + 1;	// increment the value at that address
}

int main()
{
	int a;
	a=10;
	
	IncrementByValue(a);
	printf("%d\n",a);	// no change since during execution Increment function and so copy of argument "a" freed from memory.
	
	IncrementByReference(&a);
	printf("%d\n",a); // OK. Because even if during execution Increment function is freed from memory the actual argument is changed.
	
	return 0;
}
