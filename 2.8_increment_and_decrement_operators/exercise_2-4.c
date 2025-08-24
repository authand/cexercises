#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int i = 0;
    int j = 0;
    int k = 0;
    int keep = 0;

    while (s1[i] != '\0') {
        keep = 1;

        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                keep = 0;
                break;
            }
        }
        if (keep) {
            s1[k++] = s1[i];
        }
        i++;
    }
    
    s1[k] = '\0';
}
int main() {
    char hello[] = "Hello, World";
    char* test = "HW";

    printf("%s\n", hello);
    squeeze(hello, test);
    printf("%s\n", hello);

    return 0;
}