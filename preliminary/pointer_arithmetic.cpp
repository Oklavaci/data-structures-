#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a;
	int* p;
	a=10;
	p = &a;
	
	double d;
	double* pd;
	d=100;
	pd = &d;
	
	char c;
	char* pc;
	c='c';
	pc = &c;
	

	printf("%d\n", p);
	printf("%d\n", p+1);
	printf("size of integer is %d\n\n",sizeof(int));
	
	printf("%d\n", pd);
	printf("%d\n", pd+1);
	printf("size of double is %d\n\n",sizeof(double));
	
	printf("%d\n", pc);
	printf("%d\n", pc+1);
	printf("size of char is %d\n\n",sizeof(char));
	
	printf("%d\n", *p);
	printf("%d\n", *p+1);
	*p=*p+1;
	printf("%d\n\n", a);
	
	/*TYPECAST*/
	*p = 1026; // 1026 as binary -> 00000000 00000000 00000100 00000010
	
	printf("size of integer is %d\n",sizeof(int)); //int takes 4 byte of memory
	printf("size of char is %d\n",sizeof(char)); //char takes 1 byte of memory
	printf("Address: %d\t Value: %d\n", p, *p);
	
	pc = (char*)p; //Typecasting
	printf("Address: %d\t Value: %d\n", pc, *pc); // We will see 00000010 because typcasting cause computer to see only 1 byte(char memory size)
	printf("Address: %d\t Value: %d\n", pc+1, *(pc+1)); // We will see 00000100 because typcasting cause computer to see next byte	
	
	
	/*GENERIC POINTER*/
	void *p0;
	p0=p;
	printf("Address: %d\t", p0);
		return 0;
}
