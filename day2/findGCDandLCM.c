#include <stdio.h>

int gcd(int a, int b) {
    int min = (a < b) ? a : b;  
    
    for (int i = min; i > 0; i--) {
        if (a % i == 0 && b % i == 0) { 
            return i;  
        }
    }
    return 1; 
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    printf("LCM=%d",(a*b)/gcd(a, b));
    
    return 0;
}
