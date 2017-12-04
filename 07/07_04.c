#include <stdio.h>

int main(void) {
    int replacement = 0;
    char ch;
    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            printf("!");
            ++replacement;
        } else if (ch == '!') {
            printf("!!");
            ++replacement;
        } else {
            printf("%c", ch);
        }
    }
    printf("Replaced: \n%d", replacement);
    return 0;
}