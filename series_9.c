//Given a number N. The task is to print a series of asterisk(*) from 1 till N terms with increasing order and difference being 1
#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N should be a positive integer.\n");
        return 1; // Exit with an error code
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
            
        }
        printf(" ");
       
    }

    return 0;
}
