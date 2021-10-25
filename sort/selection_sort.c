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
    for (int i = 0; i < n - 1; i++) {
        int min_i = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_i]) {
                min_i = j;
            }
        }
        swap(&arr[i], &arr[min_i]);
    }

    print_all(arr, n);
    return 0;
}