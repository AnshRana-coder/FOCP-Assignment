//WAP to implement Insert -Front, any position in between & end in an array. Print 
//the array before insert & after insert.

#include <stdio.h>

int main() {
    int n, k, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array before insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to be inserted: ");
    scanf("%d", &num);
    printf("Enter the position (0 to %d) where the element should be inserted: ", n);
    scanf("%d", &k);

    if (k < 0 || k > n) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k] = num;

    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++) { 
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

