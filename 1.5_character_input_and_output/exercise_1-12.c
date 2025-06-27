#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, state;
    state = OUT;
/*"hi   black" (test string for going through it in my mind)*/
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else {
            putchar(c);
            state = IN;
        }
    }

    return 0;
}
