#include <stdlib.h>
#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int data, int n)
{
	Node* temp1 = (Node*)malloc(sizeof(struct Node)); // create a temp1 node by allocating memory

	temp1->data = data;		//assign input data to data field of temp1 node
	(*temp1).next = NULL;	//assign NULL to pointer field of temp1 node
	
	if(n==1){				//Case for initializing the linked list i.e. first element
		(*temp1).next = head;
		head = temp1;
		return;
	}
	
	Node* temp2 = head;		//create a node pointer temp2, we will assign as head because we will start from head to (n-1)th element
	int i = 1;
	for(i;i<n-1;i++){		// Loop in order to find desired elemet in memory
	 temp2 = temp2->next ;	// move through linked list via pointers(next)
	}
	
	temp1->next = temp2->next;	// assign pointer field of previous node(temp2) to pointer field of new inserted node(temp1)
	temp2->next = temp1;	// assign temp1 node as pointer field of temp2 so that previous node will point new inserted node

}
void Print()
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
		Insert(2,1);
		Insert(3,2);
		Insert(5,2);
		Insert(99,2);
		Print();
			
		return 0;
}

