#include <stdio.h>
#define TABSTOP 8

int main(void) {
    int space_counter = 0;
    int column = 1;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            space_counter++;
        } else {
            while (space_counter > 0) {
                if (column % TABSTOP == 0) {
                    putchar('\t');
                    space_counter = 0;
                } else {
                    putchar(' ');
                    space_counter--;
                    column++;
                }
            }

            putchar(c);
            column++;

            if (c == '\n') {
                column = 1;
            }

        }
    }

    return 0;
}
