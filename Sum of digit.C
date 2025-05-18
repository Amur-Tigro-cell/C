#include<stdio.h>
int main()
{
    int n, sum = 0, lastdigit;
    scanf("%d", &n);
    while(n!=0){
        lastdigit = n%10;
        sum = sum + lastdigit;
        n = n/10;
    }
    printf("The sum of digits are %d",sum);

    return 0;
}
