#include<stdio.h>
int main() {
    int arr[50];
    int size, num, pos;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the element of array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("Enter the position that you want to delete");
    scanf("%d", &pos);
    if(pos <= 0 || pos > size) {
        printf("Invalid Position");
    } else {
        num = arr[pos - 1];
        for(int i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        for(int i = 0; i < size; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
        printf("Deleted Number %d", num);
    }
}