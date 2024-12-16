#include <stdio.h>
void deleteNumber(int *arr, int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Vi tri k hop le.\n");
        return;
    }
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int position = 2;
    deleteNumber(arr, &size, position);
    printf("\nMang sau khi xoa phan tu:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
