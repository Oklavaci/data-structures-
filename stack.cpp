#include <stdio.h>
#include <stdlib.h>

// Define the structure for stack node
struct StackNode {
    int data;
    struct StackNode* next;
};

// Function to create a new stack node
struct StackNode* NewNode(int data) {
    struct StackNode* stackNode = (struct StackNode*) malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

// Check if the stack is empty
int IsEmpty(struct StackNode* top) {
    return !top;
}

// Function to add an item to stack. It increases size of stack by 1
void Push(struct StackNode** top, int data) {
    struct StackNode* stackNode = NewNode(data);
    stackNode->next = *top;
    *top = stackNode;
    printf("%d pushed to stack\n", data);
}

// Function to remove an item from stack. It decreases size of stack by 1
int Pop(struct StackNode** top) {
    if (IsEmpty(*top))
        return INT_MIN;
    struct StackNode* temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

// Function to return the top from stack without removing it
int Peek(struct StackNode* top) {
    if (IsEmpty(top))
        return INT_MIN;
    return top->data;
}

int main() {
    struct StackNode* top = NULL;
	// &top is address of the pointer that store address of top element
    Push(&top, 10);
    Push(&top, 20);
    Push(&top, 30);

    printf("%d popped from stack\n", Pop(&top));

    printf("Top element is %d\n", Peek(top));

    return 0;
}

