#include <math.h>
#include <stdint.h>
#include <stdio.h>

void upiton(int n)
{
    n = (n / 4 + 1) * 14;

    int r[n + 1];
    int i, k;
    int b, d;
    int c = 0;

    for (i = 0; i < n; i++) {
        r[i] = 2000;
    }

    for (k = n; k > 0; k -= 14) {
        d = 0;

        i = k;
        for (;;) {
            d += r[i] * 10000;
            b = 2 * i - 1;

            r[i] = d % b;
            d /= b;
            i--;
            if (i == 0)
                break;
            d *= i;
        }
        printf("%.4d", c + d / 10000);
        c = d % 10000;
    }
}

int main(int argc, char* argv[])
{
    upiton(1);
    return 0;
}
