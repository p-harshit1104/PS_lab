#include<stdio.h>
void main(){
    float t;
    printf("enter the temoerature in centigrade :");
    scanf("%f",&t);
    if(t<0){
        printf("Freezing weather");

    }
    else if(t>0&&t<10){
        printf("Very cold weather");

    }
    else if(t>10&&t<20){
        printf("Cold weather");

    }
    else if(t>20&t<30){
        printf("Normal in temperature");
    }
    else if(t>30&&t<40){
        printf("Hot");
    }
    else{
        printf("very hot");
    }
}