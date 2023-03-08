#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *front = 0;
Node *rear = 0;
void enqueue(int x) {
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = 0;
    if(front == 0 && rear == 0) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}
void display() {
    Node *temp;
    if(front == 0 && rear == 0) {
        printf("Queue is empty");
    } else {
        temp = front;
        while(temp != 0) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
void dequeue() {
    Node *temp;
    temp = front;
    if(front == 0 && rear == 0) {
        printf("Queue is empty");
    } else {
        printf("\nDeleted data is %d\n", front->data);
        front = front->next;
        free(temp);
    }
}

void peek() {
    if(front == 0 && rear == 0) {
        printf("Queue is empty");
    } else {
            printf("%d", front->data);
    }
}
int main() {
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
    peek();
}