#include <stdio.h>

int main(void) {
    int counter = 0;
    char ch;
    while ((ch = getchar()) != '#') {
        if (counter % 8 == 0)
            printf("\n");
        if (ch=='\n')
            continue;
        printf(" {%1c\t%5d} ", ch, (int) ch);
        counter++;
    }
    return 0;
}