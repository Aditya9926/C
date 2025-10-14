#include<stdio.h>
int proddigit(int n){
    int prod = 1;
    while(n != 0){
        prod = prod*(n%10);
        n /= 10;
    }
    return prod;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Product of the number digit is : %d",proddigit(n));
}