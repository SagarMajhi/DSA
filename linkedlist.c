#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *head = 0, *newNode, *tmp;
int pos, i = 1, count = 0;
void display() {
    tmp = head;
    while(tmp != 0) {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
}
int main() {
    while(1) {
        newNode = (Node *)malloc(sizeof(Node));
        printf("Enter Data: ");
        scanf("%d", &newNode->data);
        if(newNode->data == -1) {
            break;
        } else {
            newNode->next = 0;
            if(head == 0) {
                head = tmp = newNode;
            } else {
                tmp->next = newNode;
                tmp = newNode;
            }
        }
    }
    display();
    while(1) {
        int choice;
        printf("\nLinkedlist Menu\n");
        printf("1. Insertion in the begining\n2. Insertion in the end\n3. Insertion in the given position\n4. Deletion in the begining\n5. Deletion in the end\n6. Deletion in the given position\n");
        printf("Enter the operation: ");
        scanf("%d", &choice);
        if(choice<= 0 || choice> 6) {
            printf("\nInvalid Position\n");
            break;
        } else {
            switch(choice) {
                case 1:
                    newNode = (Node *)malloc(sizeof(Node));
                    printf("Enter Data: ");
                    scanf("%d", &newNode->data);
                    newNode->next = head;
                    head = newNode;

                    printf("\nInsertion in the begining\n");
                    display();
                    break;
                case 2:
                    newNode = (Node *)malloc(sizeof(Node));
                    printf("Enter Data: ");
                    scanf("%d", &newNode->data);
                    newNode->next = 0;
                    tmp = head;
                    while(tmp->next != 0) {
                        tmp = tmp->next;
                    }
                    tmp->next = newNode;

                    printf("\nInsertion in the end\n");
                    display();
                    break;
                case 3:
                    newNode = (Node *)malloc(sizeof(Node));
                    printf("Enter Position: ");
                    scanf("%d", &pos);
                    tmp = head;
                    while(tmp != 0) {
                        count++;
                        tmp = tmp->next;
                    }
                    if(pos > count) {
                        printf("\nInvalid Position\n");
                    } else {
                        tmp = head;
                        while(i < pos) {
                            tmp = tmp->next;
                            i++;
                        }
                        printf("Enter Data: ");
                        scanf("%d", &newNode->data);
                        newNode->next = tmp->next;
                        tmp->next = newNode;

                        printf("\nInsert in the given position\n");
                        display();
                    }
                    break;
                case 4:
                    tmp = head;
                    head = head->next;
                    free(tmp);

                    printf("\nDeletion in the begining\n");
                    display();
                    break;
                case 5:
                    Node *prevNode;
                    tmp = head;
                    while(tmp->next != 0) {
                        prevNode = tmp;
                        tmp = tmp->next;
                    }
                    prevNode->next = 0;
                    free(tmp);

                    printf("\nDeletion in the end\n");
                    display();
                    break;
                case 6:
                    Node *nextNode;
                    printf("Enter Position: ");
                    scanf("%d", &pos);
                    tmp = head;
                    while(tmp != 0) {
                        count++;
                        tmp = tmp->next;
                    }
                    if(pos > count) {
                        printf("\nInvalid Position\n");
                    } else {
                        tmp = head;
                        while(i < pos) {
                            tmp = tmp->next;
                            i++;
                        }
                        nextNode = tmp->next;
                        tmp->next = nextNode->next;
                        free(nextNode);

                        printf("\nDeletion in the given position\n");
                        display();
                    }

            }
        }
    }
}