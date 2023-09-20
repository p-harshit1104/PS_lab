//Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…
#include<stdio.h>
#include<math.h>
int fact(int m) {
    int i, fact = 1;
    for (i = 1; i <= m; i++) {
        fact = fact * i;
    }
    return fact;
}
void main(){
    int sign=1,n,i;
    float sum=0;
    printf("enter the terms:");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++){
        sum=sum+(float)(i)*sign/fact(2*i-1);
        sign=sign*(-1);
    }
    printf("%f",sum);
}