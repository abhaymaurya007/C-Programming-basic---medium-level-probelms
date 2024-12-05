/*.Area of Different Shape
Write a C program that takes 2 number as input and store that number in a variable, First
input for radius of a Circle and 2nd input for side of a Square. */
#include<stdio.h>
void main(){
      float radoiusOfCircle,SideOfSquare;
      printf("Enter Radius of Circle & Side of TRiangle Respectively   :");
      scanf("%f%f",&radoiusOfCircle,&SideOfSquare);
      printf("Area of Circle  :%.2f\n",3.14*radoiusOfCircle*radoiusOfCircle);
      printf("Area of Square  %.2f",SideOfSquare*SideOfSquare);
}