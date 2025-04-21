#include <stdio.h>

int main(){
    int x;
    printf("Enter your first number: ");
    scanf("%d", &x);

    int y;
    printf("Enter your second number: ");
    scanf("%d", &y);

    int sum=x+y;
    printf("Sum of the numbers %d",sum);


    return 0;
}
