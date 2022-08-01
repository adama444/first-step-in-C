#include <stdio.h>

int main() {
    int myNum = 5;
    float myFloatNum = 5.99;
    char myLetter = 'D';
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    // Basic Data Types
    /**
    **  int -> 2 or 4 bytes
    **  flaot -> 4 bytes
    **  double -> 8 bytes
    **  char -> 1 byte
    **/

    // Format specifiers for basic data types
    /**
    **  int -> %d or %i
    **  float -> %f
    **  double -> %lf
    **  char -> %c
    **/

    // Constants
    const int MY_CONST = 15;
    const float PI = 3.1415;
    const int YEAR = 2022;
    /**
    **  Constants cannot be modified after
    **  declaration and initialisation
    **/

    // Operators
    int sum = 100 + 200;
    int sum1 = sum + 50;
    int sum2 = sum + sum1 + 50;
    sum2 = sum2 - 10;
    sum2 = sum2 * 0.014;
    sum2 = sum2 / 4;
    sum2 = sum2 % 2;
    sum = 100 + 200;
    sum1 = sum + 50;
    sum2 = sum + sum1 + 50;
    sum2 -= 10;
    sum2 *= 0.014;
    sum2 /= 4;
    sum2 %= 2;
    int x = 5;
    int y =3;
    printf("%d | TRUE(1) FALSE(0)\n", x < y);
    /**
    **  == -> equal to
    **  != -> not equal
    **  || -> logical or
    **  && -> logical and
    **/

    // Size of variables
    printf("%lu\n", sizeof(myNum));
    printf("%lu\n", sizeof(myFloatNum));
    printf("%lu\n", sizeof(myLetter));

    return 0;
}
