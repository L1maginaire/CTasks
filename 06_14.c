#include <stdio.h>
#include <string.h>

#define SIZE 256

int main(void) {
    char string[SIZE];
    int cursor = 0;
    do
        scanf("%c", &string[cursor]);
    while (string[cursor++] != '\n');
    string[cursor - 1] = '\0';
    for (int i = strlen(string) - 1; i >= 0; i--)
        printf("%c", string[i]);
    printf("\n");

    return 0;
}