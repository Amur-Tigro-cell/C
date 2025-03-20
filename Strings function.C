#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "Subro";         // Semicolon added
    char string2[] = "Sutradhar";      // Semicolon added
    
    int result = strcmp(string1, string2);  // Comparing strings
    
    if(result == 0)
    {
        printf("These strings are the same\n");
    }
    else
    {
        printf("These strings are not the same\n");
    }

    return 0;
}
