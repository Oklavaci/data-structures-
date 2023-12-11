#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a;
	int *p, **q, ***r;
	a=10;
	p = &a;
	
	printf("a = %d\t *p=%d\n", a, *p);
	
	*p = 9;
	q=&p;
	r=&q;
	
	printf("*p =%d\n", *p);
	printf("p =%d\n", p);
	printf("*q =%d\n", *q);
	printf("q =%d\n", q);
	printf("**q =%d\n", **q);
	printf("*r =%d\n", *r);
	printf("**r =%d\n", **r);
	printf("***r =%d\n", ***r);
	
	***r = 17;
	printf("a = %d\n", a);
	**q = *p-2;
	printf("a = %d\n", a);

	
		return 0;
}
