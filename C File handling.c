// C files Handling : writing to a file
#include<stdio.h> //scanf(), printf(),fprintf(),fscanf,fclose
#include<stdlib.h> //exit

int main (){
   int number;
   FILE *fptr; //declare pointer


   fptr = fopen("C:\\Users\\USER\\OneDrive\\Documents\\Attachments\\C-programs\\file.txt","w");
   if(fptr == NULL){
        printf("Error opening file");
        exit(1);

   }
   printf("Enter a random number: ");
   scanf("%d",&number);

   fprintf(fptr,"The number entered is %d",number);
   fclose(fptr);
   printf("Number written succesfully");

   return 0;


}



