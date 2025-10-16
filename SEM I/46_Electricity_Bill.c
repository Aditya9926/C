#include<stdio.h>
void main(){
    float a,cal,cals;
    printf("Enter the electricity unit : ");
    scanf("%f", &a);
    if(a <= 50){
        cal = a*0.50;
    }
    else if(a <= 150 && a > 50){
        cal = (50*0.50) + (150-a)*0.75;
    }
    else if(a <= 250 && a > 150){
        cal = (50*0.50) + (100*0.75) + (250-a)*1.20;
    }
    else{
        cal = (50*0.50) + (100*0.75) + (250*1.20) + (a*1.50) ; 
    }
    cals = cal + (cal*20)/100;
    printf("Your Electricity bill is : %f", cals);
}