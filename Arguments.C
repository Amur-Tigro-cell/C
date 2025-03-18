#include <stdio.h>

// The function now accepts parameters: name and age
void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old\n", age);
}

int main()
{
    char name[] = "Arohi Karmakar";  // Notice the correct spelling of your name
    int age = 20;

    // Passing the name and age to the function
    birthday(name, age);

    return 0;
}
