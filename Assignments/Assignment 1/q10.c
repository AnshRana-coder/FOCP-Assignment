/**  WAP to print Pascal’s Triangle.   
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1**/

#include <stdio.h>

int main() {
    int rows = 5; 
    int triangle[rows][rows]; 


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; 
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; 
            }
        }
    }

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i - 1; j++) {
            printf("  "); 
        }

        for (int j = 0; j <= i; j++) {
            printf("%d   ", triangle[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}
