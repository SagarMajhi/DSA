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
    int choice, value;
    while(1) {
        printf("\n\nQueue Menu\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
        }
    }
}