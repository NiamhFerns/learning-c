#include <stdio.h>

void foldText(char s[]) {
    int currentChar = 1, pos = 0, marker = 0;
    while (currentChar != '\0') {
        currentChar = s[pos++];
        marker++;
        if (currentChar == '\n') continue;
        if (marker >= 80) {
            if (currentChar != ' ') putchar('-');
            putchar('\n');

            marker = 1;
        }
        putchar(currentChar);
    }
}
