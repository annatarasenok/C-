#include <stdio.h>
#include <math.h>

double min(double a, double b) {
    if(a < b) {
        return a;
    } else {
        return b;
    };
}

double min3(double a, double b, double c)
{
    double x, y;
    x = min(a, b);
    y = min(b, c);

    return min(x, y);
}

int main()
{
    double a, b, c, result;
    scanf("%lf %lf %lf", &a, &b, &c);
    result = min3(a, b, c);
    printf("%f", result);
    return 0;
}