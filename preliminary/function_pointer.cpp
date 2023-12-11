#include <stdlib.h>
#include <stdio.h>

//	NOTE
//  int* fun(int, int) is a pointer to integer
//  int (*fun)(int, int) is a function pointer
//	Name of a function calls a pointer  void(*p)()= A, A() itself is a function and pointer

// Callback function
int Compare(int arg_1, int arg_2){

if (arg_1 > arg_2) return 1;
else return -1;

}

/* callback function compares two integers and return 
	1 if first element has higher rank
	0 if elements are equal
	-1 if second element has higher rank
	In this way sorting algorithm works for any ranking mechanism
	we would need only one callback function for each ranking mechanism instead of a new sorting function
*/
void Sortinger(int *A, int n, int (*compare)(int,int)) //Inputs: Array, length of array, function pointer
{
	int i,j,temp;
	for(i=0;i<n;i++) {
		for(j=0; j<n-1; j++) {
			
			if( compare(A[j], A[j+1]) > 0){
				
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}

}

int main()
{
	int i;
	int A[] = {3,2,1,5,6,4};
	Sortinger(A,6, Compare);

	for (i=0; i<6; i++) printf("%d ", A[i]);
	
	return 0;
}



