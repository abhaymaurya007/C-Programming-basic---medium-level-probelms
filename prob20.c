/*ASCII Sum
Write a C program to take two character input from the user and print the ASCII value of that two
character and display its sum. */
#include<stdio.h>
void main(){
    char ch1,ch2;
    printf("Enter 2 charcter :");
    scanf("%c %c",&ch1,&ch2);
    printf("Addition of ASCII value is %d",ch1+ch2);
}