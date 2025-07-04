#include <stdio.h>
#define MAXLINE 1024

int getline(char line[], int maxline);
void rtrim(char line[]);

int main() {
    char line[MAXLINE];

    while (getline(line, MAXLINE) > 0) {
        rtrim(line);

        if (line[0] != '\0') {
            printf("%s\n", line);
        }
    }

    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    s[i] = '\0';

    return i;
}

void rtrim(char s[]) {
    
}
