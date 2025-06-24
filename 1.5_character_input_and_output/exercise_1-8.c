#include <stdio.h>

int main() {
    int c;
    int blankc = 0;
    int tabc = 0;
    int newlinec = 0;
    int total = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                blankc++;
                break;
            case '\t':
                tabc++;
                break;
            case '\n':
                newlinec++;
                break;
            default:
                break;
        }
        total++;
    }

    printf("Character count:\nBlank\t%d\nTab\t%d\nNewline\t%d\nTotal\t%d\n", blankc, tabc, newlinec, total);

    return 0;
}
