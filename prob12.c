/*Write a program to take input for seconds from the user , And convert it into Hour, Minutes , Second
format. */
#include<stdio.h>
void main(){
    int Seconds;
    printf("Enter Total Second  :");
    scanf("%d",&Seconds);
    int hours=Seconds/(60*60);
    Seconds=Seconds%(60*60);
    int minutes=Seconds/60;
    Seconds=Seconds%60;
    printf("Hours  %d,Minutes  %d, Seconds  %d",hours,minutes,Seconds);
}