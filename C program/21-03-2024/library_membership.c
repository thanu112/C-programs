/*Write a C program that takes the age and the number of books borrowed by a library member as input. 
Use the following criteria to determine the membership status:
 
If the member is under 18 years old and has borrowed more than 2 books, display "Junior Member".
If the member is between 18 and 60 years old (inclusive) and has borrowed less than or equal to 3 books, display "Regular Member".
If the member is 60 years old or older and has borrowed less than or equal to 5 books, display "Senior Member".
Otherwise, display "Membership Status: Unknown".
Your program should:
 
Prompt the user to enter the age and the number of books borrowed.
Use simple if and nested if statements to determine the membership status based on the given criteria.
Display the determined membership status.*/

#include <stdio.h>
 
int main() {
    int age, no_of_books;
    printf("Enter age and No_of_books:");
    scanf("%d %d",&age,&no_of_books);
    if(age<18 && no_of_books>2){
        printf("Membership Status: Junior Member");
    }
    else if((age>=18&&age<=60) && (no_of_books<=3)){
        printf("Membership Status: Regular Member");
    }
    else if(age>=60 && no_of_books<=5){
        printf("Membership Status: Senior Member");
    }
    else{
        printf("Membership Status: Unknown");
    }
 
    return 0;
}