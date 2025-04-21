#include <stdio.h>

int main(){
    int i = 2, j=3, k,l;
    float a,b;
    l=i/j*j;
    k=j/i*i;
    a=i/j*j;
    b=j/i*i;

    printf("%d %d %f %f ",k,l,a,b);
    return 0;
}
