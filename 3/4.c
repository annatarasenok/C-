#include <stdio.h>
#include <math.h>

int primeQ(int x)
{
    int i;
    for(i = x - 1; i > 1; i--) {
        if(x % i == 0) {
            return 0;
        };
    };
    return 1;
}

int main()
{
    int x, result;
    scanf("%d", &x);
    result = primeQ(x);
    printf("%d", result);
    return 0;
}