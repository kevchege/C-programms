//Do while loop program for cube of numbers
#include<stdio.h>
int main(){
     int k,t=1,cube;
     
     printf("Enter the number:");
     scanf("%d", &k);
     printf("The number is:%d \n",k);
     
     
    do {
         // Calculation begins
         
         cube = t*t*t;
         printf("The number is: %d \n ",t);
         printf("The cube of %d is %d \n",t,cube);
         
         t++;
     } while(t<=k);
     
     return 0;
}
