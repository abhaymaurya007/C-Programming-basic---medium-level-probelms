/*write a c program to add first and last digit of 3 digit number*/
#include<stdio.h>
void main(){
    int num=356;
    if(num>99 && num<1000){
    printf("addition : %d",((num%10)+(num/100)));
}
else
printf("enter 3 digit number :");

}