#include <stdio.h>

int main()
{
    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows: ");
    scanf("%d", &rows);
    
    printf("Enter # of columns: ");
    scanf("%d", &columns);
    
    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);  // Notice the space before %c to consume any newline character
    
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c ", symbol);  // Printing the symbol with a space for better readability
        }
        printf("\n");  // Move to the next line after each row is printed
    }

    return 0;
}
