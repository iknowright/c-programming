#include <stdio.h>

void swap(int* x, int* y) {
    int tmp = *y;
    *y = *x;
    *x = tmp;
}

void print_all(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 5;
    int arr[5] = {64, 25, 12, 22, 11};
    for (int i = n; i >= 0; i--) {
        for (int j = 1; j < i; j++) {
            if (arr[j - 1] > arr[j]) swap(&arr[j - 1], &arr[j]);
        }
    }

    print_all(arr, n);
    return 0;
}
