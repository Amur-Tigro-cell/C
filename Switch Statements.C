#include <stdio.h>

int main() {
    char grade;
    printf("\nEnter a letter grade: ");
    scanf(" %c", &grade);  // Notice the space before %c to handle whitespace
    
    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default:
            printf("Please enter only a valid grade.\n");
    }
    return 0;
}
