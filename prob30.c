/*Write a c program that will find the medals of the based on some criteria that is total 5 levels
are there for each level the player get one medal that if the level total marks are 10 if player
got points more that 6-10 he will get the gold in the level or if player got points 1-5 he will get
silver medal. Without using control flow statements.
Note::the points you have to read from the user through scanf.
sample input: 4 5 9 8 2 sample output: player got 2 gold and 3
silver medals */
#include<stdio.h>
void main()
{
    int Lv1Marks,Lv2Marks,Lv3Marks,Lv4Marks,Lv5Marks;
    printf("Enter 1st Level Marks  :");
    scanf("%d",&Lv1Marks);
     printf("Enter 2nd Level Marks  :");
    scanf("%d",&Lv2Marks);
     printf("Enter 3rd Level Marks  :");
    scanf("%d",&Lv3Marks);
     printf("Enter 4th Level Marks  :");
    scanf("%d",&Lv4Marks);
     printf("Enter 5th Level Marks  :");
    scanf("%d",&Lv5Marks);
    int Sil=(Lv1Marks<6)+(Lv2Marks<6)+(Lv3Marks<6)+(Lv4Marks<6)+(Lv5Marks<6);
    int gold=5-Sil;
    printf("No. of gold :%d & no. silver medals :%d",gold,Sil);

}