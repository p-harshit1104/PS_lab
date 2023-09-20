//find the largest number among the three numbers entered by the user.
#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is greatest",a);
    else if(b>a&&b>c){
    printf("%d is greatest",b);
    }
    else{
    printf("%d is greatest",c);
    }
}