/*) Write a c program that if the numbers last digit is less than 5 then print the square of the
number otherwise print the same number without using control flow statements.
sample input: 12
sample output: 144
sample input: 17
sample output:17*/
#include<stdio.h>
 void main(){
    int num=15;
    num%10<5 &&printf("number :%d",num*num) || printf("number :%d",num);
}