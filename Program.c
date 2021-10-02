#include <stdio.h>

int main()
{
    char name[30],country[30];
    char skill;
    int age;
    printf("Welcome to Hacktoberfest 2021\n");
    printf("Enter your name : ");//Get User name
    scanf("%s",name);
    printf("Enter your Country of Residance : ");//Get user country
    scanf("%s",country);
    printf("Enter your Age : ");//Get user Age
    printf("%d",&age);
    printf("Rate your programmings skills from A-D (A being the highest and D being the lowest : ");//Get user skill level
    scanf(" %c",skill);
    printf("Thank you %s Happy Hacking",name);//Thank the user

    return 0;
}
