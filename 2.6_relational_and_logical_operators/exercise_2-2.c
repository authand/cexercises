#include <stdio.h>
#define LIM 64

int main() {
    int i, c;
    char s[LIM];

    for (i = 0; i < LIM-1; ++i) {
        c = getchar();
        if (c == '\n')
            break;
        if (c == EOF)
            break;
        s[i] = c;
    }
    s[i] = '\0';

    printf("%s\n", s);

    return 0;
}