//Q5. WAP to check whether number is Perfect Number or not. 
//(To check perfect number, we have to find all divisors of that number and find their sum, if 
//sum of divisors is equal to number it means number is Perfect Number.)
#include <stdio.h>

int main() {
    int x; 
    int sod=0;
    printf("Enter a no");
    scanf("%d",&x); 
    for (int j = 1; j <= x / 2; j++) {
        if (x % j == 0) {
            sod += j;  
        }
    }

        
    if (x == sod) {
        printf("%d  is a perfect no", x);
    }else{
        printf("not a perfect no");
    }
    


    return 0;
}
