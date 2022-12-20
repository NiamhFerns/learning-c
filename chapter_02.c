#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* E04
 * There is no pattern in older versions of C.
 * In newer versions these values default to 0;
 */
void e04(void)
{
    int i;
    float f;

    printf("Int: %d\nFloat: %f\n", i, f);
}

/* E05
 * (a) is the only illegal modifier.
 */

/* E06
 * Multiple consecutive underscores makes it difficult to read
 * through a function/variable name.
 */

/* E07
 * a and e. b has confusing capitalization and should still be avoided.
 * c and d should be avoided for clarity.
 */

/* E08
 * The expression `answer=(3*q-p*p)/3;` contains 13 individual tokens.
 */

/* E09
 * answer = (3 * q - p * p) / 3;
 */

/* E10
 * The only spaces that are required are in the directive and the
 * return statment.
 */

/* Pr01
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/01
 */
#define PR01_STAR_START 3
#define PR01_LINE_LENGTH 8
#define PR01_LINES 6

void pr01(void)
{
    int left_position = 0 - PR01_STAR_START, right_position = 0;
    for (int y = 0; y < PR01_LINES; y++) {
        for (int x = 0; x < PR01_LINE_LENGTH - right_position; x++) {
            if ((x == left_position && PR01_STAR_START - y <= 0) || x + 1 == PR01_LINE_LENGTH - right_position) {
                printf("*");
                continue;
            }
            printf(" ");
        }
        printf("\n");
        left_position++;
        right_position++;
    }
}

/* Pr02
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/02
 */
double pr02(double r)
{
    return (4.0 / 3.0) * M_PI * (r * r * r);
}

/* Pr03
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/03
 */
double pr03(void)
{
    float* in = malloc(sizeof(float));
    scanf("%f", in);
    double d = *in;
    free(in);
    return (4.0 / 3.0) * M_PI * (d * d * d);
}

/* Pr04
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/04
 */
void pr04(void)
{
    float* in = malloc(sizeof(float));
    scanf("%f", in);
    double d = *in;
    free(in);

    printf("Your amount after tax is: %f \n", d * 1.05);
}

/* Pr05
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/05
 */
void pr05(void)
{
    float* in = malloc(sizeof(float));
    scanf("%f", in);
    double x = *in;
    free(in);
    x = (3.0 * pow(x, 5)) + (2.0 * pow(x, 4)) - (5.0 * pow(x, 3)) - pow(x, 2) + (7.0 * x) - 6.0;
    printf("Your polynomial is: %f \n", x);
}

/* Pr06
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/06
 */
void pr06(void)
{
    float* in = malloc(sizeof(float));
    scanf("%f", in);
    double x = *in;
    free(in);
    x = ((((3.0 * x + 2.0) * x - 5.0) * x - 1.0) * x + 7.0) * x - 6.0;
    printf("Your polynomial is: %f \n", x);
}

/* Pr07
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/07
 */
void pr07(void)
{
    printf("Please enter in a $ amount: ");
    int* in = malloc(sizeof(int));
    scanf("%d", in);
    int x = *in;
    free(in);

    int tw, te, f, o;
    tw = te = f = o = 0;

    tw = x / 10 / 2;
    x -= tw * 20;
    te = x / 10;
    x -= te * 10;
    f = x / 5;
    x -= f * 5;
    o = x;

    printf("Your change is:\n");
    printf("$20 bills: %d\n", tw);
    printf("$10 bills: %d\n", te);
    printf("$5 bills: %d\n", f);
    printf("$1 bills: %d\n", o);
}

/* Pr08
 * https://github.com/williamgherman/c-solutions/tree/master/02/projects/08
 */
#define PR08_MONTHS_TO_PREDICT 3

void pr08(void)
{
    /* Input */
    printf("Please enter in a $ loan amount: ");
    float* in = malloc(sizeof(float));
    scanf("%f", in);
    float loan = *in;

    printf("Please enter in an interest rate: ");
    scanf("%f", in);
    float interest_rate = *in;

    printf("Please enter in a $ monthly payment: ");
    scanf("%f", in);
    float monthly_payment = *in;
    free(in);

    double balance_remaining = loan;

    for (int i = 0; i < PR08_MONTHS_TO_PREDICT; ++i) {
        balance_remaining *= (interest_rate / 100.0 / 12.0 + 1);
        balance_remaining -= monthly_payment;
        printf("Balance after payment %d: $%.2f\n", i + 1, balance_remaining);
    }
}

int main(int argc, char* argv[])
{
    pr08();
    return 0;
}
