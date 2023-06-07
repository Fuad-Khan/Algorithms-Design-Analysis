#include <stdio.h>
int lis(int arr[], int n) {
    int lis[n];
    int i, j, max = 0;

    // Initialize LIS values for all indexes
    for (i = 0; i < n; i++)
        lis[i] = 1;

    // Compute optimized LIS values in bottom-up manner
    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
        }
    }

    // Pick the maximum of all LIS values
    for (i = 0; i < n; i++) {
        if (lis[i] > max)
            max = lis[i];
    }

    return max;
}

int main() {
    int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    int length = lis(arr, n);

    printf("\nLength of LIS: %d\n\n", length);

    return 0;
}
