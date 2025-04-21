#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int q = a/b;

    int r = a-(b*q);

    printf("The Reminder when %d is divided by %d is:%d", a,b,r);




    return 0;
}
