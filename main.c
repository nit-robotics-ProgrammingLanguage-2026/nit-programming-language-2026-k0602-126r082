#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n < 0) {
        puts("NG");
        return 0;
    }

    int odd = n;
    if (odd % 2 == 0) {
        odd--;
    }

    long long total = 0;
    for (; odd > 0; odd -= 2) {
        total += odd;
    }
    printf("%lld\n", total);
    return 0;
}