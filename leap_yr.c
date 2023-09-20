//check whether the year entered by the user is a leap year or not.
#include<stdio.h>
void main(){
    int y;
    printf("enter a year:");
    scanf("%d",&y);
    if((y % 400 == 0)||(y % 100 != 0)&&(y % 4 == 0)){
        printf("%d is a leap year",y);
    }
        else{
            printf("%d is not a leap year",y);
        
        }
     
}