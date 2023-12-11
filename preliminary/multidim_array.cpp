#include <stdlib.h>
#include <stdio.h>

void fun(int X[][2][2]){ //function should know what to expect

printf("%d",X[0][0][1]);

}

int main()
{
	int C[3][2][2]={{{2,5},{7,9}},
					{{3,4},{6,1}},
					{{0,8},{11,13}}};
	int A[2] = {1,2};
	int B[2][3] = {{2,4,6},{5,8,9}};
	fun(C);
	return 0;
}
