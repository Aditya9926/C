#include<stdio.h>
void main(){
    int n = 1;
    while(n <= 100){
        if(n%2 == 0){
            printf("%d, ", n);
        }
        n++;
    }
}