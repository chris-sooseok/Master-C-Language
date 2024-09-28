
/* Hello world program */

#include <stdio.h>
/*
 There are two stages to compliation. (The preprocessor and The compiler
 Anything that starts with # is something that preprocessor operates on before the
 complier even gets started.
 
 After C preprocessor finisehd preprocessing everything,
 the results are ready for the compiler to take them and produce assembly code.
 That produces an executable for you to run.
 
 stdio.h (Standard I/O) header file that gives you access to a bunch of I/O functionality
 Since we need printf function, we include stdio.h
 
 On Unix system, man 3 prinft will tell you while file you need for the function
 
 */

int main(void)
{
    printf("Hello, World!\n");  // Actually do the work here
}

/**
 Main function is the function that will be called automatically when your program starts executing.
 Nothing of yours gets called before main()
 
 */

/* Compilation Details 
 
 gcc -o awesomegame ui.c characters.c npc.c items.c
 
 You can compile a chunk of c files into a big executable
 
 
 
 
 */

