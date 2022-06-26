#include <stdio.h>
#include <math.h>

int reverse(int x)
{
    int result;
    result = x % 10;
    x = x / 10;
    while (x != 0) {
        result = result * 10 + x % 10;
        x = x / 10;
    }
    return result;
}

int main()
{
    int x, result;
    scanf("%d", &x);
    result = reverse(x);
    printf("%d", result);
    return 0;
}