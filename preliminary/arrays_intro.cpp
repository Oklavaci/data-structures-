#include <stdlib.h>
#include <stdio.h>

int main()
{
	int arr[5] = {7, 4, 8, 1, 3};
	int i,*p;
	i=0;
	p = arr;

	for (i;i<5;i++){
	printf("Address = %d\n",&arr[i]);
	printf("Address = %d\n",arr+i);
	printf("Value = %d\n",arr[i]);
	printf("Value = %d\n",*(arr+i));
	}
	
		return 0;
}
