#include <stdio.h>

int square(x) {
    int output;
    output = x * x;
    return output;
}

int main() {
    printf("%d\n", square(3));
}
