/*Write a c program to find the next multiple of 10 of a given two digit number
input :- 56
output :-60*/
#include <stdio.h>
void main()
{
    int num;
    printf("enter two digit number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        num = -num;
    }
    if (num > 9 && num < 100)
    {
        // method 1
        printf("next multiple of 10 of %d is %d\n ", num, ((num / 10) + 1) * 10);
        // method 2
        printf("next multiple of 10 of %d is %d ", num, (10 - num % 10) + num);
    }
    else
    {
        printf("error enter 2 digit only");
    }
}