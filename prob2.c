/*Write a C program to find the previous multiple of 100 of a given three digit number .
 The given number is 234 and the output is 200.*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a three digit number :");
    scanf("%d", &num);
    if (num < 0)
    {
        num = -num;
    }
    if (num > 99 && num < 1000)
    {
        printf("method 1:\n");
        printf("prevoius multiple of 100 of %d is %d \n", num, (num / 100) * 100);
        printf("method 2:\n");
        printf("prevoius multiple of 100 of %d is %d ", num, num - (num % 100));
    }
    else
    {
        printf("Error enter three digit number only.");
    }
}