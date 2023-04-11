#include <stdio.h>
#define equal_bit(a, b) ~((a) - (b)) & 1

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

int main(void) {
    int _t;
    scanf("%d", &_t);
    while(_t-- > 0) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int a[2] = {};
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[j]);
            ++a[arr[j] & 1]; //a[0] == a, a[0] = b
        }
        if (!equal_bit(a[0], a[1])) {
            puts("NO");
        } else if (!equal_bit(a[0], a[1])) {
            puts("YES");
        } else {
            qsort(arr, n);
            for (int j = 0; j < n - 1; ++j) {
                if (arr[j + 1] - arr[j] == 1) {
                    return puts("YES"), 0;
                }
            }
        }
        puts("NO");

    }
    return 0;
}