#include<stdio.h>
int main() {
    int arr[50];
    int size, num, pos;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the element of array\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("Enter the number that you want to insert: ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if(pos <= 0 || pos > size++) {
        printf("Invalid Position");
    } else {
        size--;
        for(int i = size-1; i >= pos-1; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = num;
        size++;
        for(int i = 0; i < size; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
}