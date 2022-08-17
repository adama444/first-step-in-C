#include <stdio.h>

/**
**  Structure definition
**/
struct MyStructure {
    int myNum;
    char myLetter;
    char myString[30];
};

struct Car {
    char brand[50];
    char model[50];
    int year;
};

int main() {
    /**
    **  Structure instanciation
    **/
    struct MyStructure s1;
    s1.myLetter = 'A';
    s1.myNum = 4;
    printf("%c | %d\n", s1.myLetter, s1.myNum);

    struct MyStructure s2 = {1, 'Q', "Hello !"};
    printf("%c | %d | %s\n", s2.myLetter, s2.myNum, s2.myString);

    struct Car car1 = {"Toyota", "yaris", 2021};
    struct Car car2 = {"BMW", "X6", 2015};
    printf("%s | %s | %d\n", car1.brand, car1.model, car1.year);
    printf("%s | %s | %d\n", car2.brand, car2.model, car2.year);

    /**
    **  how are structures useful ?
    **  Imagine you have to write a program to store
    **  different information about Cars, such as brand,
    **  model, and year. What's great about structures is
    **  that you can create a single "Car template"
    **  and use it for every cars you make.
    **/
    return 0;
}
