#include <stdlib.h>
#include <stdio.h>


int* Add(int* arg_1, int* arg_2){
	
	int out = (*arg_1) + (*arg_2);
	return &out;
}

int* AddHeap(int* arg_1, int* arg_2){
	
	int* out = (int*)malloc(sizeof(int));
	*out = (*arg_1) + (*arg_2);
	return out;
}

int main()
{

	int a,b;
	a=2;
	b=4;
	int* ptr = Add(&a,&b);
	/*
	If you comment out just below printf, summation will be correct otherwise 
	after execution of add() function it will pop out from application stack meaning the memory
	it occupied is freed. So this memory block will remain free or other stack elements like printf 
	will replace the block, consequently our pointer will point to same address but different value.
	*/
	printf("Address where output is kept: %d\n", ptr);
	printf("Sum(value of output) = %d\t", *ptr);
	
	/* To solve above problem we utilize heap(and so malloc) */
	printf("\n...Now we keep the output at heap\n", ptr);
	ptr = AddHeap(&a,&b);
	printf("Address where output is kept: %d\n", ptr);
	printf("Sum(value of output) = %d\t", *ptr);
	
	return 0;	
}

 /*
 In call stack it is okay to pass pointers from bottom to top but not okey top to bottom.
 */ 
