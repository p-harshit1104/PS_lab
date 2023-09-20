//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
#include<stdio.h>
void main(){
    float x,y;
    printf("Enter the co-ordinates of x and y:\t");
    scanf("%f%f",&x,&y);
    if(x!=0&&y==0){
        printf("X-axis");
    }
    else if(x==0&&y==0){
        printf("Origin");
    }
    else if(x==0&&y!=0){
        printf("Y-axis");

    }
    else if(x>0&&y>0){
        printf("First quadrant");

    }
    else if(y>0&&x<0){
        printf("Second quadrant");
    }
    else if(y<0&&x<0){
        printf("Third quadrant");

    }
    else
        printf("Fourth quadrant");
    
}