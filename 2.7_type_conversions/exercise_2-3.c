#include <stdio.h>

int htoi(const char s[]) {
    int i = 0;
    int n = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    for (; s[i] != '\0'; ++i) {
        char c = s[i];
        int value;

        if (c >= '0' && c <= '9') {
            value = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            value = 10 + (c - 'a');
        } else if (c >= 'A' && c <= 'F') {
            value = 10 + (c - 'A');
        } else { break; }

        n = 16 * n + value;
    }

    return n;
}

int main() {
    printf("%lld\n", htoi("0xDEADBEEF"));
    printf("%lld\n", htoi("ff"));
}