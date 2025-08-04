#include <stdio.h>
#define MAXLINE 1024

char reverse_line[MAXLINE];

int get_line(char line[], int maxline);
char* reverse(char line[]);

int main() {
    char line[MAXLINE];

    while (get_line(line, MAXLINE) > 0) {
       printf("%s\n", reverse(line)); 
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

char* reverse(char s[]) {
    int i, j;
    j = 0;
    i = 0;

    while (s[i] != '\0') {
        ++i;
    }
    --i;

    for (; i >= 0; i--) {
        reverse_line[j] = s[i];
        ++j;
    }
    reverse_line[j] = '\0';

    return reverse_line;
}
