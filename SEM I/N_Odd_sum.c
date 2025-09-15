#include<stdio.h>
void main(){
    int n = 1,sum = 0;
    while(n <= 100){
        if(n%2 != 0){
            sum += n;
        }
        n++;
    }
    printf("Sum of n odd natural number is = %d",sum);
}