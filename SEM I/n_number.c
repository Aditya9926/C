#include<stdio.h>
void main(){
    int n,i = 1;
    printf("Enter the n natural number you want to print : ");
    scanf("%d", &n);
    while(i <= n){
        printf("%d, ",i);
        i++;
    }
}