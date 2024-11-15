/**Q9. WAP to print following Pyramid: 
0        0 
01      01
010    010  
0101  0101  
0101001010 */
#include <stdio.h>

int main() {
    int rows = 5; 
    int i, j;

    for (i = 0; i < rows; i++) {

        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d", j % 2); 
        }

        for (j = 0; j <= i; j++) {
            printf("%d", j % 2); 
        }

        printf("\n");
    }

    return 0;
}
