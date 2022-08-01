#include <stdio.h>

int main() {
    printf("Hello World!\n"); // This is a comment
    printf("I am learning C.\n");
    /**
    **   This is a multi-lines comments
    **   Ha ha ha ... very easy
    **/

    // Variables declaractions
    int myNum = 15;
    /*int myNum;
    myNum = 15;*/
    printf("%d\n", myNum);
    myNum = 5;
    float myFloatNum = 5.99;
    char myLetter = 'D';
    printf("%c\n", myLetter);
    printf("%f\n", myFloatNum);
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);

    // Multiples variables declaration
    int k, l, m;
    k = l = m = 50;
    printf("%d", k + l + m);

    // Variables names
    /**
    **   identifiers need to be short,
    **   descriptive and in camel case form
    **   Names can contain underscores (_) and
    **   must begin with a letter or (_)
    **   Reserved words cannot be used (int, float, ...)
    **/

    return 0;
}
