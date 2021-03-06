#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

int main()
{
    int x1, y1, x2, y2;
    double result;
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);

    result = distance(x1, y1, x2, y2);
    printf("%f", result);
    return 0;
}