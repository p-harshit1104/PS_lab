//1+ x + x2/2! + x3/3! + x4/4!......
#include<stdio.h>
#include<math.h>
void main(){
    int fact=1,x,sum=0,n,i;
    printf("enter the terms:");
    scanf("%d",&n);
    printf("enter the value of x:\n");
    scanf("%d",&x);
    for(i=1;i<n+1;i++){
        fact=fact*i;
        sum=sum+pow(x,i)/fact;


    }
    sum+=1;
    printf("%d\n",sum);
}