#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a,b, *p;
	a=10;
	p = &a;
	printf("%d\n",a);
	printf("%d\n",p);
	printf("%d\n",*p);
	
	b=20;
	*p = b;

	printf("%d\n",b);
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",a);
	
		return 0;
}
