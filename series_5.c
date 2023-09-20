//x- x3/3! + x5/5! - x7/7!........ 
#include <stdio.h>
#include <math.h>

int main() {
    // Remove clrscr() and conio.h
    int fact = 1, n, i;
    float x, sum = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Enter the value of x (in degrees): ");
    scanf("%f", &x);
    
    x = x * (3.14159 / 180.0); // Convert Degree To Radian
    
    int sign = 1;
    
    for (i = 1; i <= n; i += 2) {
        fact = fact * i;
        sum = sum + (pow(x, i) * sign) / fact;
        sign = sign * -1;
    }
    
    printf("%f\n", sum);
    
    return 0;
}
