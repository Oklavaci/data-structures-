#include <stdlib.h>
#include <stdio.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* head = NULL;

void Insert(int val)
{
struct Node* newNode = (Node*)malloc(sizeof(struct Node));

newNode->next = head;
newNode->data = val;
head = newNode;

}

void Delete(int position)
{
struct Node* temp = head;

if(position==1){
	head = temp->next;
	free(temp);
	return;
}

int i;

for(i=0;i<position-2;i++){
	temp = temp->next;
}

temp->next = temp->next->next;
free(temp);
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
	Insert(2);
	Insert(3);
	Insert(5);
	Insert(9);
	Print();
	Delete(1);
	Print();
		
	return 0;
}

