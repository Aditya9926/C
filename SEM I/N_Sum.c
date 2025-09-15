#include<stdio.h>
void main(){
    int n,i = 1,sum = 0;
    printf("Enter the n natural number you want the sum of : ");
    scanf("%d", &n);
    while(i <= n){
        sum += i;
        i++;
    }
    printf("Sum of n natural number is = %d", sum);
}