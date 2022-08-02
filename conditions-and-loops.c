#include <stdio.h>

int main() {
    /**
    **  Conditons
    **  if..else
    **  if..else if..else
    **  ternary operator
    **/
    if(20 > 18) {
        printf("20 is greater than 18\n");
    }
    int age = 17;
    if(age >= 18) {
        printf("You can play in NBA\n");
    } else {
        printf("Sorry, wait and train harder\n");
    }
    int time = 22;
    if(time < 10) {
        printf("Good morning\n");
    } else if(time < 20) {
        printf("Good afternoon\n");
    } else {
        printf("Good evening\n");
    }
    (time < 10) ? printf("Good day\n") : printf("Good afternoon\n");

    /**
    **  switch statement for many if..else
    **/
    int day = 0;
    switch(day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Ha ha, complete the case instructions :)\n");
    }

    /**
    **  Loops
    **  while loop
    **  do...while
    **  for loop
    **/
    int i = 0;
    while(i < 5) {
        printf("%d\n", i);
        i++;
    }
    i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while(i < 5);
    for(i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }
    /**
    **  you can use break instruction to jump out
    **  the loop like in switch statement
    **/
    /**
    **  you can use continue instruction to skip
    **  the current iteration in the loop like in switch statement
    **/

    return 0;
}
