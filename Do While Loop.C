#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;
    
    do{
        printf("Enter a # above 0: ");
        scanf("%d", &number); // Fixed typo here
        
        if(number > 0)
        {
            sum += number;
        }
        
    }while(number > 0); // The loop stops when a non-positive number is entered.
    
    printf("sum: %d\n", sum); // Added a newline for better readability
    
    return 0;
}
