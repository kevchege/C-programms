// Program to calculate surface area of a cylinder
#include<stdio.h>
#define PI 3.14
int main(){
    float radius,height,surface_area;
    
    printf("Enter the radius of Cylinder:");
    scanf("%f", &radius);
    printf("The radius of Cylinder is: %f cm \n", radius);
    
    printf("Enter the height of Cylinder:");
    scanf("%f", &height);
    printf("The height of Cylinder is: %f cm \n", height);
    
//Calculation of surface area begins
surface_area= 2*PI * radius * radius + 2*PI * radius * height;
   printf("The surface_area of the Cylinder is: %2f cm2 \n", surface_area);
   return 0;
    
}