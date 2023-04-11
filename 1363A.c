#include <stdio.h>

int res(const int a[3], int n, int x) {
    char *input_mode[2] = {"%d", "%*d"};
    if (a[2] || (a[0] && a[1] && n > x)) {
        for (int i = x; i < n; ++i) {
            scanf("%*d");
        }
        return 1;
    } else {
        int b = !!a[0];
        int f = 0;
        for (int i = x; i < n; ++i) {
            int v;
            scanf(input_mode[f], &v);
            if (f || (v & 1) == b) {
                f = 1;
            }
        }
        return f;
    }
}

int main() {
    int _t;
    scanf("%d", &_t);
    while (--_t >= 0) {
        int n, x;
        scanf("%d%d", &n, &x);

        int a[3] = {0, 0, 0};
        //printf("%d, %d, %d\n", a[0], a[1], a[2]);
        for (int i = 0; i < x; ++i) {
            int v;
            scanf("%d", &v);
            ++a[v & 1];
            a[2] = (a[2] + (v & 1)) & 1;
        }

        puts(res(a, n, x) ? "Yes" : "No");

    }

    return 0;
}