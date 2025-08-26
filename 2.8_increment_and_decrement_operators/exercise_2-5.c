#include <stdio.h>

int any(const char s1[], const  char s2[]) {
    int i = 0;
    int j = 0;

    while (s1[i] != '\0') {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
        i++;
    }

    return -1; 
}

int main() {
    char hello[] = "Hello, World";
    char test[] = "o, gdfjgdsjgjdsf";

    printf("%d\n", any(hello, test));
    return 0;
}
