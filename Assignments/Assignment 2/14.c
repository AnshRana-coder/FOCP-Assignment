/*Q14. Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1
 */

#include <stdio.h>

int main() {
    int n;

    printf("How many elements do you want to enter? ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int foundDuplicate = 0;

    printf("Duplicates are: ");
    for (int i = 0; i < n; i++) {
     
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate) {
            printf("%d ", arr[i]);
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("-1");
    }

    printf("\n");

    return 0;
}
