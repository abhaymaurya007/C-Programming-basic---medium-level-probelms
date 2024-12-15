/*1. Write a c program to find the largest number among the Three number without
using Control flow Statements sample input: 12 45 32
sample output: 45 */
#include<stdio.h>
void  main(){
    int num1=115,num2=115,num3=115;
    num1>num2 && num1>num3 && printf("largest no. %d",num1);
    num2>num1 && num2>num3 && printf("largest no. %d",num2);
    num3>num1 && num3>num2 && printf("largest no. %d",num3);
    num1==num2 && num2==num3 && printf("all    are  equal");
    
}