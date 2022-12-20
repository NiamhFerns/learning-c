#include <stdio.h>

#define TABSTOP 4

void detabLine(char s[])
{
    int lineLength = 0, currentChar = s[0];
    while (currentChar != '\0') {
        lineLength++;
        currentChar = s[lineLength];
    }

    int spaces = 4, step = 1, pos = 0;
    for (int i = 0; i < lineLength && s[i] != '\0'; i++) {
        if (s[i] != '\t' && s[i] != '\0') {
            putchar(s[i]);
            pos++;
            continue;
        }

        spaces = 4 - (pos % 4);

        for (int j = 0; j < spaces; ++j) {
            putchar(' ');
            pos++;
        }
    }
}
