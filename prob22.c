/*Calculate simple interest
Create a program that takes the principal amount, interest rate, and time in years from the
user and calculates the simple interest. Print the result with appropriate messages.*/
#include<stdio.h>
void main(){
    float principal_amount,interest_rate,time,simple_interest;
    printf("Enter principal amount :");
    scanf("%f",&principal_amount);
    printf("Enter  interest rate :");
    scanf("%f",&interest_rate);
    printf("Enter time in years :");
    scanf("%f",&time);
    simple_interest=(principal_amount*interest_rate*time)/100;
    printf("Simple interest is  :%.3f",simple_interest);
}