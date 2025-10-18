#include<stdio.h>
void main(){
    float a,b,c,d,e,per;
    printf("Enter marks of 1st subject : ");
    scanf("%f",&a);  
    printf("Enter marks of 2nd subject : ");
    scanf("%f",&b);
    printf("Enter marks of 3rd subject : ");
    scanf("%f",&c);
    printf("Enter marks of 4th subject : ");
    scanf("%f",&d);
    printf("Enter marks of 5th subject : ");
    scanf("%f",&e);
    per = (a+b+c+d+e)*100/500;
    if(per >= 90){
        printf("Your grade is A.");
    }
    else if(per >= 80){
        printf("Your grade is B.");
    }
    else if(per >= 70){
        printf("Your grade is C.");
    }
    else if(per >= 60){
        printf("Your grade is D.");
    }
    else if(per >= 40){
        printf("Your grade is E.");
    }
    else{
        printf("You are failed.");
    }
}