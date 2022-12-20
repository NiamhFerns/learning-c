#include <stdio.h>

void entab(char s[]) {
    int inWord = 1;
    char currentChar = s[0];

    int tabsToAdd = 0;
    int pos = 0;
    int spaceLength = 0;

    while (currentChar != '\0') {
        if (currentChar != ' ') {
            putchar(currentChar);
            currentChar = s[++pos];
            continue;
        }

        int previousPos = pos;

        while (currentChar == ' ') {
            currentChar = s[++pos];
        }
        tabsToAdd = (pos - 1 - previousPos) / 4 + 1;
        for (int i = 0; i < tabsToAdd; ++i) {
            putchar('\t');
        }
    }
}
