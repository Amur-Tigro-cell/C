#include <stdio.h>

int main() {
    double prices[]={5.0,15.0,20.0,25.0};
    for(int i=0; i<5; i++)
    {
        printf("$%.2lf", prices[i]);
    }

    return 0;
}
