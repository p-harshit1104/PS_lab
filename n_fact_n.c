//Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5
#include<stdio.h>
#include<math.h>
void main(){
    int fact=1,sum=0,n,i;
    printf("enter the terms:");
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        fact=fact*i;
        sum=sum+(fact)/i;
    }
    printf("%d",sum);
}