//https://codeforces.com/problemset/problem/1346/A

#include <stdio.h>

int factor(int n, int k) {
    return (n / (1 + k + k * k + k * k * k));
}

int main(void) {
    int _t;
    scanf("%d", &_t);
    int n, k;
    while (_t-- > 0) {
        scanf("%d%d", &n, &k);
        printf("%d %d %d %d\n", factor(n, k), factor(n, k) * k, factor(n, k) * k * k, factor(n, k) * k * k * k);
    }
}

