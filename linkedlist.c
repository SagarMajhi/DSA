#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *head, *newNode, *tmp;
int pos, i = 1, n = 1, count = 0;
int main() {
    head = 0;
    while(n) {
        newNode = (Node *)malloc(sizeof(Node));
        printf("Enter Data: ");
        scanf("%d", &newNode->data);
        if(newNode->data == -1) {
            break;
        }
        newNode->next = 0;
        if(head == 0) {
            head = tmp = newNode;
        } else {
            tmp->next = newNode;
            tmp = newNode;
        }
    }
    printf("\nInserted Data\n");
    tmp = head;
    while(tmp != 0) {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
    while(n) {
        int choice;
        printf("Enter the operation that you want to perform: ");
        scanf("%d", &choice);
        if(choice > 6 || choice < 1) {
            break;
        }
        switch (choice){
            case 1:
                //  Insert at beginning
                newNode = (Node *)malloc(sizeof(Node));
                printf("Enter data: ");
                scanf("%d", &newNode->data);
                newNode->next = head;
                head = newNode;

                printf("\nInsert in the begining\n");
                tmp = head;
                while(tmp != 0) {
                    printf("%d\n", tmp->data);
                    tmp = tmp->next;
                }
                break;
            
            case 2:
                //  In The End
                newNode = (Node *)malloc(sizeof(Node));
                printf("Enter data: ");
                scanf("%d", &newNode->data);
                newNode->next = 0;
                tmp = head;
                while(tmp->next != 0) {
                    tmp = tmp->next;
                }
                tmp->next = newNode;
                printf("\nIn the End\n");
                tmp = head;
                while(tmp != 0) {
                    printf("%d\n", tmp->data);
                    tmp = tmp->next;
                }
                break;

            case 3:
                //  Insert after a give location
                // int pos, i = 1;
                // int count = 0;
                newNode = (Node *)malloc(sizeof(Node));
                printf("Enter the position: ");
                scanf("%d", &pos);
                tmp = head;
                while(tmp != 0) {
                    count++;
                    tmp = tmp->next;
                }
                if(pos > count) {
                    printf("Invalid Position");
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
                }
                printf("\nInsert after a give location\n");
                tmp = head;
                while(tmp != 0) {
                    printf("%d\n", tmp->data);
                    tmp = tmp->next;
                }
                break;
            case 4:
                //  Deletion in the begining
                tmp = head;
                head = head->next;
                free(tmp);
                printf("\nDeletion in the begining\n");
                tmp = head;
                while(tmp != 0) {
                    printf("%d\n", tmp->data);
                    tmp = tmp->next;
                }
                break;
            case 5:
                //  Deletion from End
                Node *prevNode;
                tmp = head;
                while(tmp->next != 0) {
                    prevNode = tmp;
                    tmp = tmp->next;
                }
                prevNode->next = 0;
                free(tmp);
                printf("\nDeletion from End\n");
                tmp = head;
                while(tmp != 0) {
                    printf("%d\n", tmp->data);
                    tmp = tmp->next;
                }
                break;
            case 6:
                //  Delete from specified position
                Node *nextNode;
                // int pos, i = 1;
                tmp = head;
                printf("Enter Position: ");
                scanf("%d", &pos);
                while (i < pos-1)
                {
                   tmp = tmp->next;
                   i++; 
                }
                nextNode = tmp->next;
                tmp->next = nextNode->next;
                free(nextNode);
                printf("\nDelete from specified position\n");
                tmp = head;
                while(tmp != 0) {
                    printf("%d\n", tmp->data);
                    tmp = tmp->next;
                }
                break;
        }
    }  
}