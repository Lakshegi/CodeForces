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
    int f = 0;
    for (int i = 1; i < n - k; ++i) {
        if (sum > (sum + arr[k + i - 1] - arr[i - 1])) {
            f = i;
            sum = sum + arr[k + i - 1] - arr[i - 1];
        }
        //sum = sum + arr[k + i - 1] - arr[i - 1];
    }
    printf("%d", f == 0 ? 1 : f);
}
