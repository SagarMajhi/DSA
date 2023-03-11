#include<stdio.h>
#define N 5
int stack[N];
int top = -1;
void push(int x) {
    if(top == N-1) {
        printf("\nOverflow\n");
    } else {
        top++;
        stack[top] = x;
    }
}
void pop() {
    if(top == -1) {
        printf("\nUnderflow\n");
    } else {
        printf("\nDeleted stack is %d\n", stack[top]);
        top--;
    }
}
void peek() {
    if(top == -1) {
        printf("\nstack is empty\n");
    } else {
        printf("\npeek = %d\n", stack[top]);
    }
}
void display() {
    for(int i = top; i>= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
int main() {
    int choice, value;
    while(1) {
        printf("Enter operation: ");
        scanf("%d", &choice);
        if(choice <= 0 || choice > 4) {
            break;
        } else {
            switch(choice) {
                case 1:
                    while(1) {
                        printf("Enter Data: ");
                        scanf("%d", &value);
                        if(value == -1) {
                            break;
                        } else {
                            push(value);
                        }
                    }
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    peek();
                    break;
                case 4:
                    display();
                    break;
            }
        }
    }
}