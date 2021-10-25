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

void merge(int *arr, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++) L[i] = arr[p + i];
    for (int i = 0; i < n2; i++) R[i] = arr[q + 1 + i];
    L[n1] = 100;
    R[n2] = 100;
    int i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}

void merge_sort(int *arr, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}

int main() {
    int n = 5;
    int arr[5] = {64, 25, 12, 22, 11};
    merge_sort(arr, 0, n - 1);

    print_all(arr, n);
    return 0;
}
