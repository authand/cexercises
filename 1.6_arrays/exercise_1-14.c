#include <stdio.h>

int main() {
    int chars[128];
    int c, i;
    
    for (i = 0; i < 128; i++) {
        chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++chars[c];
    }
    
    printf("--- Character Frequencies ---\n");
    for (i = 0; i < 128; i++) {
        printf("%c:", i);
        for (; chars[i] > 0; chars[i]--) {
            putchar('#');
        }
        putchar('\n');
    }

    putchar(' ');
    for (i = 0; i <= 100; i += 2) {
        printf("%d ", i);
    }
    putchar('\n');

    return 0;
}
