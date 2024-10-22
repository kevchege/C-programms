//  C STRUCTURES
#include <stdio.h>
#include <string.h>

struct Student{
    char name[30];
    char email[40];
    char regNo[16];
    int ID,phone_number;
    float marks;
}student1,student2;

int main() {
    //struct Student student1 student2
    strcpy(student1.name,"Kevin");
    strcpy(student1.email,"kibutikevin@zetech.ke");
    strcpy(student1.regNo,"BCS-05-0099/2024");
    student1.ID=37810180;
    student1.phone_number = 728945553;
    student1.marks=78.82;
    
    
    printf("Name: %s\n",student1.name);
    printf("Email: %s\n",student1.email);
    printf("Registration number: %s\n",student1.regNo);
    printf("ID: %d\n",student1.ID);
    printf("Phone number: %d\n",student1.phone_number);
    printf("Marks: %f\n",student1.marks);

    return 0;
}