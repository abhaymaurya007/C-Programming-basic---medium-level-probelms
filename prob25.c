/*Volume of a Sphere Develop a program to calculate the volume of a sphere and take the radius input
from user by using
scanf. */
#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of sphere  :");
    scanf("%f",&radius);
    float pie=3.14;
    float volume=1.334*pie*radius*radius*radius;
    printf("Volume of the Sphere is :%.2f",volume);
}