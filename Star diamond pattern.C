#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int nsp = n/2;
    int nst = 1;
    int ml = n/2+1;
    for(int i = 1; i<=n; i++){
        for(int q = 1; q<=nsp; q++){
            printf(" ");
        }
        for(int j = 1; j<=nst; j++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
}
