#include<stdio.h>
void main(){
    int n,i = 1;
    printf("Enter the number you what the multiplication table of : ");
    scanf("%d", &n);
    while(i <= 10){
        printf("%d x %d = %d \n",n,i,i*n);
        i++;
    }
}