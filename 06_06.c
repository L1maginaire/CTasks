#include <stdio.h>
#include <string.h>
#define size 1024

int main(void)
{
    char word[size];
    scanf("%s", word);
    for (int i = strlen(word)-1; i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");

    return 0;
}