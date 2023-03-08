#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x) {
    if(rear == N-1) {
        printf("Overflow");
    } else if (rear == -1 && front == -1) {
        rear = front = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}
void dequeue() {
    if(rear == -1 && front == -1) {
        printf("Underflow");
    } else if (rear == front) {
        rear = front = -1;
    } else {
        printf("\nthe queue that is deleted is %d\n", queue[front]);
        front++;
    }
}
void display() {
    int i;
    if(front == -1 && rear == -1) {
        printf("empty queue");
    } else {
        for(i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}
void peek() {
    if(front == -1 && rear == -1) {
        printf("empty queue");
    } else {
        printf("%d\n", queue[front]);
    }
}
int main() {
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
    return 0;
}