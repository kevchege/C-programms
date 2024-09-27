//Program to initialize Grading system
#include <stdio.h>

int main() {
    int english,geography,chemistry,average;
    char grade;
    
    printf("Enter the marks for English :");
    scanf("%d",&english);
    
    printf("Enterthe marks for Geography :");
    scanf("%d",&geography);
    
    printf("Enterthe marks for Chemistry :");
    scanf("%d",&chemistry);
    
    //Calculation of average
    average = (english + geography + chemistry)/3;
    
    
 if(average>=70 && average<=100){
    grade = 'A';
 }else if (average>=60){
     grade = 'B';
 }else if (average>=50){
     grade = 'C';
 }else if (average>=40){
     grade = 'D';
 }else{
     grade = 'E';
 }    
      printf("The average is : %d% \n ", average);
      printf("The grade is: %c \n ", grade);  
  return 0; 
}