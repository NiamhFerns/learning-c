#include <stdio.h>
#include <stdlib.h>

int expand(char s1[], char s2[]);

int main (int argc, char *argv[])
{
    char s1[] = "a-g";
    char *s2 = malloc(sizeof(char) * 1);
    expand(s1, s2);
    printf("Your first string is %s and your expanded string is %s.\n", s1, s2);
    return 0;
}

int expand(char s1[], char s2[])
{
    int b = s1[0], e = s1[2], i = e - b;
    s2 = realloc(s2, sizeof(char) * i);

    i = b;
    int j = 0;
    while (i <= e) {
        s2[j] = i;
        i++;
        j++;
    }
    s2[j] = '\0';
    return 0;
}
