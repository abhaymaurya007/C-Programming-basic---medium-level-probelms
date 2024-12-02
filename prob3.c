/*Write a C program to reverse a two digit number without using any loop. 
The given number is 13 and the output is 31*/
#include<stdio.h>
void main(){
    int num;
    printf("enter a two digit number :");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    if(num>9 && num<100 )
    {
        printf("reverse of %d is %d%d ",num,num%10,num/10);
    }
    else 
    printf("enter 2 digit number only.");
}