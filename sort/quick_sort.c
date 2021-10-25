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

int partition(int* arr, int p, int r) {
    int x = arr[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}

void quicksort(int* arr, int p, int r) {
    if (p < r) {
        int q = partition(arr, p, r);
        quicksort(arr, p, q - 1);
        quicksort(arr, q + 1, r);
    }
}

int main() {
    int n = 5;
    int arr[5] = {64, 25, 12, 22, 11};
    quicksort(arr, 0, n - 1);
    print_all(arr, n);
    return 0;
}
