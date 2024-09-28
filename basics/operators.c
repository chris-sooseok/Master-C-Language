
#include <stdio.h>


int main(void)
{
    int y;
    int x;

    y += x > 10? 17: 37;
    // above expression is same as below
    if (x > 10)
        y += 17;
    else
        y += 37;

    int i = 0;

    i++;        // Add one to i (post-increment)
    i--;        // Subtract one from i (post-decrement)

    ++i;        // Add one to i (pre-increment)
    --i;        // Subtract one from i (pre-decrement) 

    /*
    With pre-increment and pre-decrement, the value of the variable is incremented or decremented before the expression is evaluated. 
    With post-increment and post-decrement, the value of the expression is first computed with the value as-is,
    and then the value is incremented or decremented after the value of the expression has been determined.
    */
    int j;

    i = 10;
    j = 5 + i++;  // Compute 5 + i, _then_ increment i

    printf("%d, %d\n", i, j);  // Prints 11, 15


    x = 10, y = 20;  // First assign 10 to x, then 20 to y
    x = 10; y = 20;  // First assign 10 to x, then 20 to y
    /* The latter is two separate expressions, while the former is a single expression!
    With the comma operator, the value of the comma expression is the value of the rightmost expression:
     */

    x = (1, 2, 3);

    printf("x is %d\n", x);  // Prints 3, because 3 is rightmost in the comma list


    int a = 999;
    printf("%zu\n", sizeof a);      // Prints 4 on my system
    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
    printf("%zu\n", sizeof 3.14);   // Prints 8 on my system

    /*
    sizeof gives you bytes of arguments, which has the type of size_t 
    It’s important to note that sizeof is a compile-time operation40. The result of the expression is determined entirely at compile-time, not at runtime.
    */

    printf("Hello, World!\n");  // Ah, blessed familiarity
}
