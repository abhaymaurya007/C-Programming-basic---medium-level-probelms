/*Write a 'C' program to check and print the Maximum number among two numbers without
using ternary operator and control statement’s.
Sample input: int a = 10, b = 20
Sample Output: MAX = 20 */
#include<stdio.h>
void main(){
    int num1,num2;
    printf("enter 1st and 2nd number :");
    scanf("%d%d",&num1,&num2);
    num1>num2 && printf("%d is biggest.",num1);
    num2>num1 && printf("%d is biggest.",num2);
    num1==num2 && printf("%d and %d both are equal.",num1,num2);
   
}