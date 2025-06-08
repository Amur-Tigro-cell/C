#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        char ch;
        for(int k = 0; k <2 * i - 1; k++) {
            printf("%c",'A'+ k);
        }


        printf("\n");
    }

    return 0;
}
