#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (0 to n-2, one element repeated): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xorAll = 0;

    for (int i = 0; i < n; i++) {
        xorAll ^= arr[i];
        xorAll ^= i;
    }

    xorAll ^= n - 1;

    printf("Repeated element: %d\n", xorAll);
    return 0;
}
