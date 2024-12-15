/*Write a c program to swap the two numbers using bitwise XOR operator Note: Using
bitwise XOR Operator Only Input: a = 5 b = 7 output: a = 7 b = 5*/
#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter !st  number :");
    scanf("%d",&num1);
    printf("Enter 2nd num  :");
    scanf("%d",&num2);
    printf("Before  Swapping  :");
    printf("num1 =%d  num2  %d",num1,num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("\nAfter Swapping  :");
    printf("num1 =%d  num2  %d",num1,num2);
}