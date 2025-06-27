#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
   int c, count, state;
   state = OUT;
   count = 0;

   while ((c = getchar()) != EOF) {
       if (c == ' ' || c == '\n' || c == '\t') {
           if (state == IN) {
               putchar(' ');
               for (; count > 0; --count) {
                   putchar('#');
               }
               putchar('\n');
               state = OUT;
               count = 0;
           }
       } else {
           putchar(c);
           count++;
           state = IN;
       }
   }
// " hey  test"
   return 0;
}
