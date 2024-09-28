#include <stdio.h>

/*
Variable is a human-readable name that refers to some data in memory

This index in memory is called an address, a location, or a pointer.
*/

int main(void)
{
    int i;    // Holds signed integers, e.g. -3, -2, 0, 1, 10
    float f;  // Holds signed floating point numbers, e.g. -3.1416

    printf("Hello, World!\n");  // Ah, blessed familiarity
}

/*
Above the int i and float f are uninitialized variables that haven't been assigned any values, yet.
Before initializing the variables, we must assume they contain some nonsense number
*/

int main(void)
{
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";  // char * ("char pointer") is the string type

    printf("%s  i = %d and f = %f!\n", s, i, f);
}


#include <stdbool.h>

int main(void) {
    int x = 1;
    bool x = true;

    if (x) {
        printf("x is true!\n");
    }
}
/*
In C, 0 means 'false', and non-zero means 'true'
You can also declare Boolean types as ints

If you include #include <stdbool.h>, you can use bool type as well

*/