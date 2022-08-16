#include <stdio.h>

int main() {
    /**
    **  printf() -> to output values in console
    **  scanf() -> to get values form console
    **/
    int myNum;
    printf("Type a number: ");
    scanf("%d", &myNum);
    printf("This is your number: %d\n", myNum);

    char firstName[30];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Your first name is: %s\n", firstName);

    /**
    **  memory address
    **/
    int myAge = 19;
    printf("%p\n", &myAge);   // Print the address in memory of myAge variable
    // And is in the hexadecimal form (0x...)
    // "&" reference operator is used to access to the memory address of a variable
    // &myAge is called a pointer

    /**
    **  Pointers
    **/
    /** a pointer is a variable that stores
    **  the memory address of another variable
    **/
    int age = 20;
    int* ptr = &age;
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%p\n", &age);
    printf("%p\n", ptr);

    return 0;
}
