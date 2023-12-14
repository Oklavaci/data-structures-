#include <stdlib.h>
#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* Insert(struct Node* head, int val)
{
struct Node* newNode = (Node*)malloc(sizeof(struct Node));

newNode->next = head;
newNode->data = val;
head = newNode;

return head;

}


void Print(struct Node* head)
{
	struct Node* temp = head;
	printf("List :");
	while(temp!=NULL){
		printf("%d ",(*temp).data);
		temp = temp->next;
	}
	printf("\n");
	
}

// Since head is not global we hould pass it and return
struct  Node* Reverse(struct Node* head){
	struct Node *curr,*prev,*temp_next;
	
	curr = head;
	prev = NULL;
	
	while(curr != NULL){
	
		temp_next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp_next;
	}
	head = prev;
	return head;
}


int main()
{
	struct Node* head = NULL;
	head = Insert(head,2);
	head = Insert(head,5);
	head = Insert(head,9);
	head = Insert(head,7);
	Print(head);
	head = Reverse(head);
	Print(head);
		
	return 0;
}

