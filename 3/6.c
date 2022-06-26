#include <stdio.h>
#include <math.h>

int c = 0;

int factorial(int x)
{
    int i, res;
    for(i = 0; i < c; i++) {
            printf("...");
        }
        printf("factorial(%d)\n", x);
    if (x == 1) {
        res = 1;
    } else {
        c++;
        res = x * factorial(x - 1);
        for(i = 0; i < c; i++) {
            printf("...");
        }
        printf("factorial(%d)\n", x);
    }
    c--;


    return res;
}

int main()
{
    int x, result;
    scanf("%d", &x);
    result = factorial(x);
    printf("%d", result);
    return 0;
}