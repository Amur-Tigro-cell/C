#include <stdio.h>
#include <stdbool.h>

int main(){
    float temp = 25;        // Typo fixed

    if(temp <= 0 || temp >= 30 ){
        printf("\nThe weather is good!\n");
    }
    else{
        printf("\nThe weather is bad!\n");
    }

    return 0;
}
