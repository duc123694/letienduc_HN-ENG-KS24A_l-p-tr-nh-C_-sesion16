#include <stdio.h>
void insertNumber(int *arr, int *size, int value, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri k hop le.\n");
        return;
    }
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5; 
    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int value = 25;  
    int position = 2;  
    insertNumber(arr, &size, value, position);
    printf("\nMang sau khi them phan tu:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
