#include <stdio.h>

int main()
{
    int arr[6] = {5, 2, 4, 6, 1, 3};

    for (int i = 1; i < 6; i++)
    {
        int j = i - 1;
        int curr = arr[i];
        while (curr < arr[j])
        {
            arr[j + 1] = arr[j];
            arr[j] = curr;
            if (j > 0)
                --j;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}