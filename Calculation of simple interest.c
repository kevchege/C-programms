// Program to calculate Simple interest
#include <stdio.h>

int main() {
    int p, t, simple_interest;
    float r;
     printf("Enter the principal_amount:", p);
     scanf("%d",&p);
     printf("The principal_amount is %d Ksh\n" ,p);
     
    printf("Enter time:", t);
    scanf("%d",&t);
    printf("The time is %d years\n" ,t);
    
    printf("Enter rate:", r);
    scanf("%f",&r);
    printf("The rate is %.1f\n" ,r);
    
//Calculation of simple_interest starts

simple_interest = (p * r * t)/100;
    printf("The simple_interest is ksh: %d" ,simple_interest);

     
     
     return 0;
}
