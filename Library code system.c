// Library code system
#include <stdio.h>

int main(){
    int due_date,returnDate,days_overdue,fine_rate,fine_amount;
    int book_id;
    
    printf("Enter the book_id :");
    scanf("%d", &book_id);
    
    printf("Enter the due_date: ");
    scanf("%d", &due_date);
    
    printf("Enter the returnDate: ");
    scanf("%d", &returnDate);
    
//Calculating overdue days
days_overdue = returnDate - due_date;
if(days_overdue<=7){
    fine_rate=20;
}else if(days_overdue<=14){
    fine_rate=50;
}else{
    fine_rate=100;
}
    
    fine_amount= days_overdue * fine_rate;
    
    printf("The days_overdue is: %d\n", days_overdue);
    printf("The fine_rate is: %d% \n", fine_rate);
    printf("The fine_amount is: %d Ksh \n", fine_amount);
    
    return 0;
    
}