/*5. Write a 'C' program to take the marks of a student in 5 subjects as input and determine how
many subjects have marks greater than or equal to 35 and how many have marks less than
35.
The program should not use any control statements (if, else, switch, etc.) or the ternary
operator.
DAILY LAB PRACTICE PROBLEMS
Sample input: int sub1 = 38, sub2 = 34, sub3 = 35, sub4 = 78, sub5 = 20 Sample
Output: Pass in 3 subject and fail in 2 subject*/
#include<stdio.h>
void main(){
    int sub1,sub2,sub,sub3,sub4,sub5;
   printf("Enter number of 5 Subjects  :");
   scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
   int count=0;
   //36 is passing marks
   sub1>35 && ++count;
   sub2>35 && ++count;
   sub3>35 && ++count;
   sub4>35 && ++count;
   sub5>35 && ++count;
   printf("passed in %d subjects  failed in %d subjects.\n",count,5-count);
   //method 2-->
   int pass=(sub1>35)+(sub2>35)+(sub3>35)+(sub4>35)+(sub5>35);
   printf("passed in %d subjects  failed in %d subjects.",(5-pass),pass);

}