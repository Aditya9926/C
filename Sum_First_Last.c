#include<stdio.h>
int main(){
    int n,f,l,sum;
    printf("Enter a digit : ");
    scanf("%d",&n);
    f = n;
    while(f >= 10){
        f = f/10;
    }
    l = n%10;
    sum = f+l;
    printf("Sum of first and last digit is : %d",sum);
}