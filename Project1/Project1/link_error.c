 //
//  link_error.h
//  Project1
//
//  Created by Chris Kim on 9/28/24.
//

#include <stdio.h>

extern int x;

int main() {

    printf("%d", x);
    
    return 0;
}
/*
When building this code errors occur:
error1 [ Undefined symbol: x ]
error2 [ Linekr command failed ]
 */

// This is not a compiler error; this code will compile very fine

/*
The process is
1. The compiler produces linker_error.o file
2. Linker will combine linker_error.o file with stdio.h library
3. Since there is external x, which means the x variable comes from a diffferent source, the linker will try to fetch the x as well
4. Since we don't have any source file that defines x, we encounter an error for this
*/
