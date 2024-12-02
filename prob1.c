/*Write a C program to add each digit of a given two digit number.
 The given number is 67.
Explanation 67 = 6 + 7 = 13
Expected output is : 13
*/
#include <stdio.h>
void main()
{
    // Integer datatype variable created to store the number from user
    int num;
    // show massage to integer for enter a number
    printf("enter two digit number :");
    // input function for take value in runtime
    scanf("%d", &num);
    // check number is negative or not
    if (num < 0)
    {
        // convert into positive
        num = -num;
    }
    // check number have 2 digit or not
    if (num > 9 && num <= 99)
    {
        // logic to find addition of each digit and also print it.
        printf("Addition of each two digit is : %d", (num / 10 + num % 10));
    }
    else
    { // if number is not two digit then show a error massage
        printf("Error  enter right two digit number. ");
    }
}
