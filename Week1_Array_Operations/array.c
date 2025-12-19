#include <stdio.h>

#define MAX 10

// Traversal
void traversal(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Insertion (index'e eleman ekleme)
int insertion(int arr[], int size, int index, int value) {
    if (size >= MAX) {
        printf("Array dolu, ekleme yapilamaz.\n");
        return size;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1]; // shift
    }
    arr[index] = value;
    return size + 1;
}

// Deletion (index'teki elemani silme)
int deletion(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Gecersiz index.\n");
        return size;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // shift
    }
    return size - 1;
}

// Reverse (diziyi ters cevirme)
void reverse(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int arr[MAX] = {1, 2, 3, 4, 5};
    int size = 5;

    // Traversal
    traversal(arr, size);

    // Insertion
    size = insertion(arr, size, 2, 99);
    traversal(arr, size);

    // Deletion
    size = deletion(arr, size, 3);
    traversal(arr, size);

    // Reverse
    reverse(arr, size);
    traversal(arr, size);

    return 0;
}

