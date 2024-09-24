//Program to Calculate volume of a cylinder
#include<stdio.h>
#define PI 3.14
int main(){
    float radius,height,volume;
    printf("Enter the radius of Cylinder:");
    scanf("%f", &radius);
    printf("The radius of Cylinder is: %f cm \n", radius);
    
    printf("Enter the height of Cylinder:");
    scanf("%f", &height);
    printf("The height of Cylinder is: %f cm \n", height);
    
//Calculation of Volume begins
volume= PI * radius * radius * height;
    printf("The volume of Cylinder is: %2f cm^3 \n", volume);
    
    return 0;
}