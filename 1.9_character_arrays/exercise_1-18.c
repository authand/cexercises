#include <stdio.h>
#define MAXLINE 1024

int get_line(char line[], int maxline);
void rtrim(char line[]);

int main() {
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0) {
        rtrim(line);

        if (line[0] != '\0') {
            printf("%s\n", line);
        }
    }

    return 0;
}

int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    s[i] = '\0';

    return i;
}

void rtrim(char s[]) {
    int i;

    for (i = 0; s[i] != '\0'; ++i) {
        ;
    }
    --i;
    
    while (i >= 0 && s[i] == ' ' || s[i] == '\t')  {
        --i;
    }
    s[i + 1] = '\0';
}
