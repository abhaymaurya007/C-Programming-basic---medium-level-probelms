/*Write a c program to find the previous multiple of 10 of a given two d igit number input :- 56
output :-50*/
#include<stdio.h>
void main(){
    int num=56;
    if(num<0){num=-num;}
    if(num>9 && num<100)
    {
        printf("%d of previous multiple is %d\n",num,(num/10)*10);
         printf("%d of previous multiple is %d\n",num,num-(num%10));
    }
    else 
    printf("enter exact 2 digit number");
}