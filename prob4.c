/*Write a C program to calculate and print the area of a square and rectangle.
Side of square is : 5
Length and breadth of rectanngle is : 4 , 5*/
#include <stdio.h>
void main()
{
    // as given
    int sideOfSquare = 5, lengthOfRectangle = 4, breadthOfRectangle = 5;
    printf("Area of Square is %d \n", sideOfSquare * sideOfSquare);
    printf("Area of rectangle is %d \n", lengthOfRectangle * breadthOfRectangle);
}