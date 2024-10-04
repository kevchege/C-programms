//Qualification for bank loan
#include int main(){
int age, income;
/*
printf("enter age: ");
scanf("%d",&age);

printf("enter income: ");
scanf("%d",&income);
*/
printf("enter age and income: ");
scanf("%d%d",&age, &income);

if (age>=21 && income>21000){
printf("Congratulation you qualify for the loan");
}
else{
printf ("You dont qualify:");
}
return 0;
}

