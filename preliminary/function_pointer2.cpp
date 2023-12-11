#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int compare(const void* arg_1, const void* arg_2){

	int A = *((int*)arg_1); // typecasting to *int and get value
	int B = *((int*)arg_2);
	return A-B;
}

int main()
{

	int i;
	int A[]={-69,8,0,9,-17,2};
	
	int (*comparePtr)(const void*, const void*) = compare;
	// qsort is math.h library function and takes function pointer as input
	qsort(A,6,sizeof(int),comparePtr);	// Or just   qsort(A,6,sizeof(int),compare); since function name itself is a function pointer
	for (i=0; i<6; i++) printf("%d ", A[i]);
	
	return 0;
}



