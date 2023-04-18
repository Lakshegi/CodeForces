//https://codeforces.com/problemset/problem/467/B

#include <stdio.h>

int main(void) {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int arr[m + 1];
    for (int i = 0; i < m + 1; ++i) {
        scanf("%d", &arr[i]);
    }
    int tmp = arr[m];
    int sum = 0;
    int xx = 0;
    int answer = 0;
    for (int i = 0; i < m + 1; ++i) {
        xx = tmp ^ arr[i];
        while (xx) {
            if (xx & 1) {
                ++sum;
            }
            xx = xx > 1;
        }
        if (sum <= k) {
            ++answer;
        }
        sum = 0;
    }
    printf("%d", answer);
}
