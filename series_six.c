//1- x2/2! + x4/4! - x6/6!........
#include <stdio.h>
#include <math.h>

int fact(int m) {
    int i, fact = 1;
    for (i = 1; i <= m; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, i;
    float x, sum = 1; // Initialize sum to 1
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Enter the value of x (in degrees): ");
    scanf("%f", &x);
    
    x = x * (3.14159 / 180.0); // Convert Degree To Radian
    
    int sign = -1; 
    
    for (i = 2; i <= n; i += 2) { 
        sum = sum + (pow(x, i) * sign) / fact(i);
        sign = sign * -1;
    }
    
    printf("%f\n", sum);
    
    return 0;
}
