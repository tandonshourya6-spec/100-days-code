#include <stdio.h>

int main() {
    int n;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements (0 to %d, except one missing): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    int missing = totalSum - arrSum;
    printf("Missing number: %d\n", missing);

    return 0;
}
