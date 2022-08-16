#include <stdio.h>
#include <math.h>   // math header file that contains math functions

// Function creation
void myFunction() {
    printf("Just a function :)\n");
}

void grettings(char name[]) {
    printf("Hello %s\n", name);
}

void grettings_age(char name[], int age) {
    printf("Hello %s\nYou are %d years old\n", name, age);
}

int add(int, int);
int factorial(int);

int main() {    // main() is a function
    /**
    **  Functions
    **/
    printf("Hello world !\n");  // It's a function
    myFunction();   // myFunction's call
    grettings("Adama");
    grettings_age("John", 20);
    printf("1 + 2 = %d\n", add(1, 2));
    printf("4! = %d\n", factorial(4));

    printf("The square root of 16 is %f\n", sqrt(16));
    printf("The number up to 1.6 is %f and the downwards number is %f\n", ceil(1.6), floor(1.6));
    printf("2³ is %f\n", pow(2, 3));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n-1);
}
