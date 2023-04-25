//https://codeforces.com/problemset/problem/1066/A

#include <stdio.h>

int stop_train(int v, int l, int r) { //сколько фонарей загораживает стоячий поезд
    return r / v - (l - 1) / v;
}

int main(void) {
    int _t;
    scanf("%d", &_t);
    int x, v, l, r;
    while (_t-- > 0) {
        scanf("%d%d%d%d", &x, &v, &l, &r);
        printf("%d\n", x / v - stop_train(v, l, r));
    }
}
