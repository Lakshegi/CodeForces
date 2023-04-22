//https://codeforces.com/problemset/problem/467/B

#include <stdio.h>

unsigned bit_count(unsigned a) {
    unsigned k = 0;
    while(a) {
        k += a & 1;
        a >>= 1;
    }
    return k;
}

int friend(unsigned a, unsigned b, unsigned k) {
    return bit_count(a ^ b) <= k;
}

int main(void) {
    unsigned n, m, k;
    scanf("%u%u%u", &n, &m, &k);
    unsigned arr[m + 1];
    for (int i = 0; i < m + 1; ++i) {
        scanf("%u", &arr[i]);
    }
    int s = 0;
    for(int i = 0; i < m; ++i) {
        s += friend(arr[i], arr[m], k);
    }

    printf("%d\n", s);
}
