#include <stdlib.h>
#include <stdio.h>


/*
If we application out of "stack" memory for example function calls exhaust the memory Stack Overflow occurs
Bad recursion or large array again can cause. We could know the size of a data type only during compile time
but lets say we have to decide how large the array will be based on parameter during runtime its a problem for stack

For all these requirements like allocating large chunks of memory or keeping data in the memory till the time we want
We have Heap. Applications heap is not fixed unlike stack. 
By dynamically allocating memory we utilize heap.

*/



int main()
{

	int n,i;
	printf("Size of array: \t");
	scanf("%d",&n);
	
	/* 
	create a pointer to address of memory block we want to allocate in heap, 
	then allocate memory of n times of the size of int data type.
	*/
	int *A = (int*)malloc(n*sizeof(int)); // same as (int*)calloc(n, sizeof(int)); calloc also initialize the allocated memory as 0.
	
	for(i = 0; i<n ;i++){
		A[i] = i+1;
	}
	
	printf("A: ");
	for(i = 0; i<n ;i++){
	printf("%d ",A[i]);	
	}


	int *B = (int*)realloc(A,2*n*sizeof(int)); // reallocate the memory utilizing address of previously allocated memory but this time double the size	
	printf("\nPrev block address: %d, new address: %d\n", A,B);
	
	printf("B: ");
	for(i = 0; i<2*n ;i++){
	printf("%d ",B[i]);	
	}
	
	printf("\nDeallocating memory...\n");
	free(B); //Free the memory, deallocate  equivalent to  int *A = (int*)realloc(A,0);
	printf("B: ");
	for(i = 0; i<2*n ;i++){
	printf("%d ",B[i]);	// after freeing memory we will observe garbage values. 
	}
	
	return 0;
	
	
}

/*
In appliation's stack instructions(zeros and ones in fact) pop ups and pop outs that is it clear itself.
However if we do not deallocate the dynamically allocated memory it remains allocated in heap until application terminates.
This is problematic as we left unused memory as allocated and also in a scenario where our key(a function for example) in stack, 
pop outs but our data is in still heap. This means we lost our data.
*/
