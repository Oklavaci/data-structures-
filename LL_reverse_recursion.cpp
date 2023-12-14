#include <stdlib.h>
#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* Insert(struct Node* head, int val){
	
struct Node* newNode = (Node*)malloc(sizeof(struct Node));

newNode->next = head;
newNode->data = val;
head = newNode;

return head;
}

void Print(struct Node* head){
	
	struct Node* temp = head;
	printf("List :");
	while(temp!=NULL){
		printf("%d ",(*temp).data);
		temp = temp->next;
	}
	printf("\n");	
}

struct Node* Reverse(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        // Base case: if head is null or only one node, it's the new head of the reversed list.
        return head;
    }
    struct Node* rest = Reverse(head->next);
    // Recursive case: reverse the rest of the list and put the first element at the end.
    head->next->next = head;
    head->next = NULL;
    return rest; // 'rest' is the new head of the reversed list.
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

