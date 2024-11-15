// Q3. WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator) 
#include <stdio.h>

int subtract(int a, int b) {
    b = ~b + 1;
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }

    return a;
}

int main() {
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Result of %d - %d = %d\n", a, b, subtract(a, b));
    
    return 0;
}
