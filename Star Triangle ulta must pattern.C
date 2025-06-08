#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int nsp = 0;
    int nst = n;
    for(int i = 1; i<=n; i++){
        for(int q = 1; q<=nsp; q++){
            printf(" ");
        }
        for(int j = 1; j<=nst; j++){
            printf("*");
        }
        nsp++;
        nst--;
        printf("\n");
    }
}
