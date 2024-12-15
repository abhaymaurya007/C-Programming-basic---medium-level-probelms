/* Write a c program to convert the small letter to Capital letter
sample input: t sample Output: T */
#include<stdio.h>
void main(){
    char ch;
    printf("Enter Small letter Character :");
    scanf("%c",&ch);
    if(ch>96 && ch<123){
        printf("Converted character :%c",ch-32);
    }
    else
    printf("Enter only small letter characters.");

}