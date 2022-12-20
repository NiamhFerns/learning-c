#include <math.h>
#include <stdint.h>
#include <stdio.h>

double derroot(int root)
{
    return 1.0 / (2.0 * sqrt(root));
}

int main(int argc, char* argv[])
{
    printf("%f\n", derroot(4));
    return 0;
}
