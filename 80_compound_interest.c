#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, ci;
    printf("Enter principal, rate, time: ");
    scanf("%lf %lf %lf", &p, &r, &t);
    ci = p * pow((1 + r / 100), t) - p;
    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}
