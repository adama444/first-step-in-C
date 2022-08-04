#include <stdio.h>

int main() {
    /**
    **  Arrays
    **/
    int myNumbers[] = {25, 32, 21, 54};
    printf("%d\n", myNumbers[0]);
    // show array elements
    for(int i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }
    // array declaration
    int anotherNumbers[3];
    anotherNumbers[0] = 1;
    anotherNumbers[1] = 2;
    for(int i = 0; i < 3; i++) {
        printf("%d\n", anotherNumbers[i]);
    }
    /**
    **  You cannot change the size of an
    **  array after creation
    **/

    /**
    **  Strings
    **/
    char greetings[] = "Hello World!";
    printf("%s\n", greetings);
    greetings[0] = 'K';
    printf("%s\n", greetings);
    char anotherString[] = {'H', 'i', ' ', '!', '\0'};
    printf("%s\n", anotherString);

    return 0;
}
