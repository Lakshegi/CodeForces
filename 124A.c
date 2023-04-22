//https://codeforces.com/problemset/problem/124/A

#include <stdio.h>

int main(void) {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);

    int k = 1;
    for (int i = 0; i < n; ++i) {
        if ((a <= i - 1) && (b >= n - i)){
            ++k;
        }
    }
    printf("%d", k);
}