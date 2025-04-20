#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4;
    int totalMarks;
    float percentage;

    printf("Enter marks of sub1 out of 40: ");
    scanf("%d", &sub1);

    printf("Enter marks of sub2 out of 40: ");
    scanf("%d", &sub2);

    printf("Enter marks of sub3 out of 40: ");
    scanf("%d", &sub3);

    printf("Enter marks of sub4 out of 40:  ");
    scanf("%d", &sub4);

    totalMarks= sub1+sub2+sub3+sub4;
    percentage=(totalMarks/160.0)*100;

    printf("TotalMarks = %d out of 160\n", totalMarks);
    printf("Percentage =%.2f\n",percentage);

    return 0;

}
