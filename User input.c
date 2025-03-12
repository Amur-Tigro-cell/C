#include <stdio.h>

int main() {
    int age;
    printf("\nHow old are you?");
    
    scanf("%d", &age);
    printf("You are %d years old", age);
    
    

    return 0;
}


#include <stdio.h>

int main() {
    char name[25];
    int age;
    printf("\nWhat's your name?");
    scanf("%s", name);
    
    printf("\nHow old are you?");
    scanf("%d", &age);
    
    printf("\nHello%s,how are you?",name);
    printf("You are %d years old", age);
    
    

    return 0;
}
