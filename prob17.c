/*Write a 'C' program to take the number of days and convert into (days:months:years)
Sample input: int days = 500
Sample Output: 1 year 4 month and 15 days. */
#include<stdio.h>
void main(){
    int days;
    printf("Enter total days  :");
    scanf("%d",&days);
    int years=days/365;
    days=days%365;
    int months=days/30;
    days=days%30;
    printf("%d years %d months %d days.",years,months,days);
}