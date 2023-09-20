 
 //1*2*3 + 2*3*4 +3*4*5+ 4*5*6 + . …... .+ n*(n+1)*(n+2).

#include<stdio.h>
#include<math.h>
void main(){
    int fact=1,x,n,i;
    int sum=0;
    printf("enter the terms:");
    scanf("%d",&n);
    
    for(i=1;i<n+1;i++){
        sum = sum + i * (i + 1) * (i + 2);
    }

       
   
    printf("%d\n",sum);
}