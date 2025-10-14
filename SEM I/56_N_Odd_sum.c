#include<stdio.h>
void main(){
    int n,m = 0,sum = 0;
    printf("Enter a natural number : ");
    scanf("%d",&n);
    while(m <= n){
        if(m%2 != 0){
            sum += m;
        }
        m++;
    }
    printf("Sum of n odd natural number is = %d",sum);
}