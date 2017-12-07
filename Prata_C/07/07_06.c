#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int counter = 0;
    char ch;
    bool b = false;
    while ((ch = getchar()) != '#') {
        if (ch == 'e')
            b = true;
        if (ch == 'i' && b == true) {
            counter++;
            b = false;
        }
    }
    printf("%d", counter);
    return 0;
}
