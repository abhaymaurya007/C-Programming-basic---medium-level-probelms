/*Convert days in Y-M-D :
Write a program in C to input number of days. Find and display number of years, weeks, months
and days. */
#include<stdio.h>
void main(){
    int days;
    printf("Enter total days  :");
    scanf("%d",&days);
    int years=days/365;
    int months=(days%365)/30;
    int weeks=((days%365)%30)/7;
    days=((days%365)%30)%7;
    printf("%d years %d months weeks %d and %d days.",years,months,weeks,days);
}