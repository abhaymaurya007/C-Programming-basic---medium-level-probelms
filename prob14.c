/*. Write a 'C' program to check and print that given number is even or odd without using
ternary operator and control statement’s.
Sample input: int a = 10
Sample Output: EVEN
Sample input: int a = 125
Sample Output: ODD*/
#include<stdio.h>
void main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num<0)num=-num;
    printf((num%2)==0?"Even":"Odd");
}