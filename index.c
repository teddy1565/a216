#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int fn(long long int n) {
    if (n == 1) {
        return 1;
    }
    long long int sum = 0;
    for (;n >= 1; n--) {
        sum += n;
    }
    return sum;
}

long long int gn(long long int n) {
    if (n == 1) {
        return 1;
    }
    return fn(n) + gn(n - 1);
}

int main(void) {
    long long int n = 0;
    while(scanf("%lld", &n) != EOF) {
        printf("%lld %lld\n", fn(n), gn(n));
    }
    return 0;
}