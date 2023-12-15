#include <stdlib.h>
#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head = NULL;

struct Node* GetNewNode(int val){
	struct Node* newNode = (Node*)malloc(sizeof(struct Node));
	if (newNode == NULL) {
        perror("Failed to allocate memory for new node");
        exit(EXIT_FAILURE);
    }
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->data = val;
	return newNode;
}

void InsertAtHead(int val){
	struct Node* newNode = GetNewNode(val);
	if (head == NULL){
		head = newNode;
		return ;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void InsertAtTail(int val){
	struct Node* newNode = GetNewNode(val);
	if (head == NULL){
		head = newNode;
		return ;
	}
	
	// Traverse to the end of the list
	struct Node* temp = head;
	while (temp->next != NULL){ 
		temp = temp->next;	
	}
	
	newNode->prev = temp;
	newNode->next = NULL;
	temp->next = newNode;
}

//helper function to Print
struct Node* MoveNext(struct Node* node) {
	printf("-> ");
    return node->next;
}
//helper function to Print
struct Node* MovePrev(struct Node* node) {
    struct Node* temp = head;
    struct Node* prev = NULL;
    while(temp != NULL && temp != node) {
        prev = temp;
        temp = temp->next;
    }
    	printf("<- ");
    return prev;
}


void Print(struct Node* head, struct Node* (*move)(struct Node*))
{
	struct Node* temp = head;
	printf("List:");
	while(temp!=NULL){
		printf("%d ",(*temp).data);
		temp = move(temp);
	//	temp = temp->next;
	}
	printf("\n");	
}

int main()
{
	InsertAtHead(2);
	InsertAtHead(5);
	InsertAtHead(3);
	Print(head,MoveNext);
	InsertAtTail(2);
	InsertAtTail(5);
	InsertAtTail(3);
	Print(head,MoveNext);
	
	// Find the tail node for reverse printing
    struct Node* tail = head;
    while(tail != NULL && tail->next != NULL) {
        tail = tail->next;
    }
	Print(tail,MovePrev);	
	
	return 0;
}

