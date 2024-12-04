/*Write a C program to print sum of N natural numbers without using loops.
Sample input : int n = 10
Sample output : 55 */
#include<stdio.h>
void main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    printf("sum of natural numbers : %d",(num*(num+1))/2);
}