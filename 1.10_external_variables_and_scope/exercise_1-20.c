#include <stdio.h>
#define TABSTOP 8
# test
int main() {
    int c;
    int column = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {

            int spaces_to_add;
            spaces_to_add = TABSTOP - (column % TABSTOP);
            for (int i = spaces_to_add; i > 0; i--) {
                putchar(' ');

            column = column + spaces_to_add;
            }
        } else if (c == '\n') {

            putchar(c);
            column = 0;
        } else {

            putchar(c);
            column++;
        }
    }

    return 0;
}
