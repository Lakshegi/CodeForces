//https://codeforces.com/contest/363/problem/B

#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += arr[i];
    }

    int x = sum, f = 0;

    for (int i = 0; i < n - k; ++i) {
        if (x > (x + arr[k + i] - arr[i])) {
            f = i;
            x = x + arr[k + i] - arr[i];
        }
    }
    printf("%d\n", f == 0 ? 1 : ++f);
    //printf("%d", x);
}
