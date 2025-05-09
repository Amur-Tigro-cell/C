#include<stdio.h>

int main()
{
    int number;
    printf("Enter a number for its multiplication table: ");
    scanf("%d", &number);

    printf("Multiplication table of %d\n", number);
    for(int i = 1 ; i <=10; i = i+1){
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
