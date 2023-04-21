//https://codeforces.com/problemset/problem/1721/B

#include <stdio.h>

int n, m, x, y, d;

int
touch(int w)
{
    switch (w) {
        case 1:
            return y - d <= 1;
        case 2:
            return x + d >= n;
        case 3:
            return y + d >= m;
        case 4:
            return x - d <= 1;
        default:
            return w / 0;
    }
}

int
main(void)
{
    int _t;
    scanf("%d", &_t);

    while (_t-- > 0) {
        scanf("%d%d%d%d%d", &n, &m, &x, &y, &d);

        printf("%d\n", touch(1) && touch(4) ||
                       touch(2) && touch(3) ||
                       touch(1) && touch(3) ||
                       touch(2) && touch(4) ?
                       -1 :
                       m + n - 2);
    }

}