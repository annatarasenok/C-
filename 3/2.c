#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    while ((a != 0) && (b != 0)) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return a + b;
}

int main()
{
    int x, y, result;
    scanf("%d", &x);
    scanf("%d", &y);

    result = gcd(x, y);
    printf("%d", result);
    return 0;
}