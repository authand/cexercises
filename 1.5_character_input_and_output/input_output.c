#include <stdio.h>

int print_eof();
int verify_getchar();

int main() {
    print_eof();
    verify_getchar();

    return 0;
}

int print_eof() {
    printf("%d\n", EOF);

    return 0;
}

int verify_getchar() {
    int c = getchar();
    
    if (c != EOF) {
        printf("not EOF");
    } else {
        printf("EOF");
    }

    return 0;
}