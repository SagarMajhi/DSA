#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if(front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}

void dequeue() {
    if(front == -1 && rear == -1) {
        printf("Queue is Underflow");
    } else if(front == rear) {
        printf("\nDequeued Element is %d\n", queue[front]);
        front = rear = -1;
    } else {
        printf("\nDequeued Element is %d\n", queue[front]);
        front = (front + 1) % N;
    }
}

void display() {
    int i = front;
    if(front == -1 && rear == -1) {
        printf("empty queue");
    } else {
        while(i != rear) {
            printf("%d\n", queue[i]);
            i = (i+1) % N;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    int choice, n;
    while(1) {
        printf("\nEnter the operation that you want to perform: ");
        scanf("%d", &choice);
        if(choice > 0 && choice < 4) {
            switch(choice) {
                case 1:
                    while(1) {
                        printf("Enter Data: ");
                        scanf("%d", &n);
                        if(((rear + 1) % N) == front){
                            printf("\nQueue is Overflow\n");
                            break;
                        } else if(n == -1) {
                            break;
                        } else {
                            enqueue(n);
                        }
                    }
                    break;
                case 2:
                    dequeue();
                    break;
                case 3:
                    printf("\nAll Data\n");
                    display();
                    break;
            }
        } else {
            printf("\nInvalid choice\n");
            break;
        }
    }
    return 0;
}
