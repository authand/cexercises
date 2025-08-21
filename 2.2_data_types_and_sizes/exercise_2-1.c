#include <stdio.h>
#include <limits.h>

int main() {
    printf("Range of unsigned char\n\t%d to %d\n", 0, UCHAR_MAX);
    printf("Range of signed char\n\t%d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Range of unsigned short\n\t%d to %d\n", 0, USHRT_MAX);
    printf("Range of signed short\n\t%d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned int\n\t%u to %u\n", 0, UINT_MAX);
    printf("Range of signed int\n\t%d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned long\n\t%lu to %lu\n", 0, ULONG_MAX);
    printf("Range of signed long\n\t%ld to %ld\n", LONG_MIN, LONG_MAX);

    return 0;
}