//Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................
#include<stdio.h>
#include<math.h>
void main(){
    int fact=1,sum=0,n,i;
    printf("enter the terms:");
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        fact=fact*i;
        sum=sum+fact;
        
        
    }
    printf("%d",sum);
    

    
}