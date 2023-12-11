#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <psapi.h>

/* FUNCTION TO PRINT MEMORY USE*/
void printMemoryUsage() {
    PROCESS_MEMORY_COUNTERS pmc;

    // Get the current process handle
    HANDLE currentProcess = GetCurrentProcess();

    // Retrieve the memory info
    if (GetProcessMemoryInfo(currentProcess, &pmc, sizeof(pmc))) {
        printf("Memory Usage:\n");
        printf("\tWorking Set Size: %zu bytes\n", pmc.WorkingSetSize); // Physical memory in use
    } else {
        printf("Failed to retrieve memory information.\n");
    }
}

/* BASIC FUNCTION TO USE MEMORY*/
void fun(){
int n = 1000000;
char *C = (char*)malloc(n*sizeof(char));
}


int main()
{
	int i;
	printf("**Let's Paul Allen's Card**\n");
	printf("Enter number of calls :\t");
	scanf("%d",&i);
	
	while(i){
		printf("To contniue press 1 else press 0\n");
		scanf("%d",&i);
		printf("fun is calling...\n");
		fun();
		printMemoryUsage();
	}

	return 0;
}



