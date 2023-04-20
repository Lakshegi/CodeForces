//https://codeforces.com/problemset/problem/1721/B

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int n, m, x, y, d;

    for (int i = 0; i < t; ++i) {
        scanf("%d%d%d%d%d", &n, &m, &x, &y, &d);
        if ((x + d < m) && (x - d > 1) && (y - d > 1) && (y + d < n)) {
            printf("-1");
        } else {
            printf("%d\n", m + n - 2);
        }
    }

}
//(x - 1 <= d) && (m - y <=d) && (n - x <=d) && (y - 1 <= d)
//(x + d < m) && (x - d > 1) && (y - d > 1) && (y + d < n)