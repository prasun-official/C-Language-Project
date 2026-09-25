#include <stdio.h>

int main()
{
    char name[50];
    int roll, math, science, english, hindi, computer;
    int total;
    float percentage;

    printf("===== STUDENT REPORT CARD =====\n");

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("\nEnter Marks:\n");

    printf("Math: ");
    scanf("%d", &math);

    printf("Science: ");
    scanf("%d", &science);

    printf("English: ");
    scanf("%d", &english);

    printf("Hindi: ");
    scanf("%d", &hindi);

    printf("Computer: ");
    scanf("%d", &computer);

    total = math + science + english + hindi + computer;
    percentage = total / 5.0;

    printf("\n==============================\n");
    printf("       STUDENT REPORT CARD\n");
    printf("==============================\n");

    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);

    printf("------------------------------\n");
    printf("Math         : %d\n", math);
    printf("Science      : %d\n", science);
    printf("English      : %d\n", english);
    printf("Hindi        : %d\n", hindi);
    printf("Computer     : %d\n", computer);

    printf("------------------------------\n");
    printf("Total Marks  : %d / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);

    if (percentage >= 40)
        printf("Result       : PASS\n");
    else
        printf("Result       : FAIL\n");

    printf("==============================\n");

    return 0;
}