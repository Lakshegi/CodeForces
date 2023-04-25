//https://codeforces.com/problemset/problem/362/B

#include <stdio.h>

void qsort(int *arr, int size) {
    int i = 0;
    int j = size - 1;
    int o = arr[size / 2];

    while (i <= j) {
        while (arr[i] < o) {
            i++;
        }
        while (arr[j] > o) {
            j--;
        }
        if (i <= j) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if (j > 0) {
        qsort(arr, j + 1);
    }
    if (i < size) {
        qsort(&arr[i], size - i);
    }
}

int check_arr(int *arr, int n, int m) {
    if (arr[0] == 1 || arr[m - 1] == n) { return 0; }
    for (int i = 0; i < m - 2; ++i) {
        if (arr[i + 1] == arr[i] + 1 && arr[i + 2] == arr[i] + 2) { return 0; }
    }
    return 1;
}

int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, m);
    printf("%s\n", check_arr(arr, n, m) ? "YES" : "NO");
}
