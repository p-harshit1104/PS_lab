#include<stdio.h>
#include<math.h>
void main(){
    float total;
    int allow;
    int basic;
    char grade;
    printf("Enter the basic salary: \n");
    scanf("%d",&basic);
    printf("Enter the grade: \n");
    scanf(" %c",&grade);
    if(grade=='A'){
        allow=1700;
        
    }
    else if(grade=='B'){
        allow=1500;
        
    }
    else{
        allow=1300;
        
    }
    total=(basic+(0.2*basic)+(0.5*basic)-(0.11*basic)+allow);
    printf("the total salary is: %f\n",total);
    int rounnd=round(total);
    printf("round off salary is: %d",rounnd);
}