/*Write a C program to convert temperature from Fahrenheit to Celsius.
C= (F - 32) * (5.0 / 9.0)
Input as :
Enter temperature in Fahrenheit: 100
 Expected output:
100.00 Fahrenheit is 37.78 Celsius. */
#include<stdio.h>
void main(){
    float fahrenTem;
    printf("enter temprature in fahrentheit :");
    scanf("%f",&fahrenTem);
    printf("%.2f faherenheit is %.2f Celsius.",fahrenTem,(fahrenTem-32)*(5.0/9.0));
}