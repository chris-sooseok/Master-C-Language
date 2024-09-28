#include <stdio.h>


int main(void)
{
    int i = 0;

    while (i < 10) {
        printf("i is now %d!\n", i);
        i++;
    }

    /*
    They (do-while and while) are basically the same, except if the loop condition is false on the first pass, do-while will execute once, but while won’t execute at all
    In other words, the test to see whether or not to execute the block happens at the end of the block with do-while. It happens at the beginning of the block with while.
    */

   i = 10;

    // this is executed once, because the loop condition is not checked until
    // after the body of the loop runs:

    do {
        printf("do-while: i is %d\n", i);
        i++;
    } while (i < 10);


    int goat_count = 2;

    switch (goat_count) {
        case 0:
            printf("You have no goats.\n");
            break;

        case 1:
            printf("You have a singular goat.\n");
            break;

        case 2:
            printf("You have a brace of goats.\n");
            break;

        default:
            printf("You have a bona fide plethora of goats!\n");
            break;
    }

    int x = 1;
    switch (x) {
    case 1:
        printf("1\n");
        // Fall through!
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3\n");
        break;
}
}