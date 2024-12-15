/*Write a program that takes the total bill amount and the number of people from the user.
Calculate and print the amount each person needs to pay, assuming an equal split of the bill. */
#include<stdio.h>
void main(){
    float amount;
    printf("Enter total bill have to pay :");
    scanf("%f",&amount);
    int people;
    printf("Enter no. of people have to pay :");
    scanf("%d",&people);
    printf("per person should pay : %.2f",amount/(float)people);
}
