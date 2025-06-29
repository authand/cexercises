#include <stdio.h>
#include <string.h>

int main() {
    int c, count;
    char current[1024];
    count = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' && count >= 80) {
            current[++count] = '\0';
            printf("%s\n", current);
            count = 0;
            memset(current, 0, sizeof(current));

        } else if (c != '\n') {
            current[count++] = c;
        } else if (c == '\n' && count < 80) {
            count = 0;
            memset(current, 0, sizeof(current));
        }
    } 

    return 0;
}
