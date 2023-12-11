#include <stdlib.h>
#include <stdio.h>

/*
Arrays are always passed to the function by reference.
It makes sense if we remaind that function arguments are not actual arguments but copies of actual arguments in stack memory.
Arrays are large in size in general so instead of copying all elements in array is waste of memory but pointing the 
address of array occupies as much memory as a pointer would.
*/



/* direct use */
int SumOf(int arr[], int size)
{
	int i, sum;
	sum=0;
	
	for(i=0;i<size;i++){
		sum+= arr[i];
	}
	return sum;
}

/* array as pointer use */
int Double(int *arr, int size)
{
	int i, sum;
	sum=0;
	
	for(i=0;i<size;i++){
		*(arr+i)= 2*(*(arr+i)); // same as arr[i] = 2*arr[i]
	}

}

int main()
{
	int arr[] = {1,2,3,4,5};
	int total;
	int i;
	int size;
	
	size = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sizeof(arr));
	
	total = SumOf(arr,size);
	printf("%d\n",total);

	Double(arr,size);
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
