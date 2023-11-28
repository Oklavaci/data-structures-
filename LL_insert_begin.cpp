#include <stdlib.h>
#include <stdio.h>

struct Node {   // Node 
	int data;
	struct Node* next;
};

struct Node* head; // define a global node pointer "head". This pointer points to the head (address) of linked list

void Insert(int data)	// Insert function
{
	Node* temp = (Node*)malloc(sizeof(struct Node));	// memory allocation for a node [data|pointer]
	(*temp).data = data;	//assign input data to data field of temp node
	temp->next = head;	//assign old head to pointer(next) field of temp node. (*temp).next is same as temp->next
	head=temp;			// assign temp node as new head node
}

void Print()	// Print function
{
	struct Node* temp = head;
	printf("List :");
	while(temp!=NULL){
		printf("%d ",(*temp).data);
		temp = temp->next;
	}
	printf("\n");
	
}

	int main()
	{

		head = NULL;	
		printf("how many elements?\n");
		
		int n,i,x;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("Enter the element \n");
			scanf("%d",&x);
			Insert(x);
			Print();
		}
		
		return 0;
	}

