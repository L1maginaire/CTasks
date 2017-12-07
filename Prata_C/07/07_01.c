#include <stdio.h>

int main(void) {
    int spacec = 0;
    int enterc = 0;
    int otherc = 0;
    char ch;
    while ((ch = getchar()) != '#') {
        if (ch == ' ')
            spacec++;
        else if (ch == '\n') {
            enterc++;
            continue;
        } else
            otherc++;
    }
    printf("SPACES: %d, ENTERS: %d, OTHER SYMBOLS: %d", spacec, enterc, otherc);
    return 0;
}