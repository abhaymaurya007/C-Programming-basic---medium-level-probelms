/*Write a C program to reverse 3 digit number without using any loops. Given number is 786 and
expected output is 687. */
#include<stdio.h>
void main(){
     int num;
     printf("Enter 3 digit number  :");
     scanf("%d",&num);
     if(num<0){
        num=-num;
     }
     if(num>99 && num<1000){
    printf("%d of reverse is %d%d%d.",num,num%10,(num/10)%10,num/100);
     }
     else 
     printf("enter 3 digit number only.");
}