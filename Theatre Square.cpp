#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double n, m, a, k;

    scanf(" %lf %lf %lf", &n, &m, &a);

    k = ceil(n/a) * ceil(m/a);

    printf("%.0lf", k);

    return 0;
}
