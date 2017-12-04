#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    while ((ch = getchar()) != '#') {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch) {
                case 'a':
                    printf("a");
                    break;
                case 'b':
                    printf("b");
                    break;
                case 'c':
                    printf("c");
                    break;
            }
        else
            printf("islower()==false");
        while (getchar() != '\n')
            continue;
    }
    return 0;
}