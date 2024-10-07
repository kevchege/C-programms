//For loop program for cube of numbers
#include<stdio.h>
int main(){
     int k,t,cube;
     
     printf("Enter the number:");
     scanf("%d", &t);
     printf("the number is:%d \n",t);
     
     //for(start,stop,step);
     
     for(k=1;k<=t;k++){
         // Calculation begins
         
         cube = k*k*k;
         printf("The number is: %d \n ",t);
         printf("the cube of %d is %d \n",t,cube);
     }
     
     return 0;
}
