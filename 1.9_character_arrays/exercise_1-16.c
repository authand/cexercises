#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line*/
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }

    return 0;
}

/*read a line into s, return its length*/
int get_line(char s[], int lim) {
    int c, i, j;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 2) {
            s[j++] = c;
        }
    }
    
    if (c == '\n') {
        if (i <= lim - 2) {
            s[j++] = c;
        }
        ++i;
    }
    s[j] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i] != '\0')) {
        ++i;
    }
}
