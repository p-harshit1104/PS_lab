//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the side of triangle: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c&&b==c){
        printf("Equilateral triangle");

    }
    else if(a==b||a==c||c==b){
        printf("Isosceles triangle");

    }
    else{
        printf("Scalane triangle");
    }
}