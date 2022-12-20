#include <stdio.h>

void removeComments(char s[])
{
    char currentChar = s[0], previousChar = s[0];
    int index = 0;
    int insideComment = 0;
    int multilineComment = 0;
    
    while (previousChar != '\0') {
        previousChar = currentChar;
        currentChar = s[++index];
        insideComment = insideComment || previousChar == '/' && (currentChar == '/' || currentChar == '*');
        multilineComment = previousChar == '/' && currentChar == '*';

        if (!insideComment) {
            putchar(previousChar);
        }

        if (insideComment && ((previousChar == '\n' && !multilineComment) || (previousChar == '*' && currentChar == '/' && multilineComment))) {
            insideComment = 0;
            multilineComment = 0;
        }
    }
}
