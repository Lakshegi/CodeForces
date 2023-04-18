//https://codeforces.com/problemset/problem/499/B

#include <stdio.h>
#include <string.h>

int main(void) {
    int n, m;
    scanf("%d%d", &n, &m);
    char s[n * 11];
    for (int i = 0; i < n; ++i) {
        scanf("%s' '", s);
    }


    for (int i = 0; i < m; ++i) {
        char s1[10], s2[10];
        scanf("%s%s", s1, s2);
        printf("%s ", strlen(s1) <= strlen(s2) ? s1 : s2);
    }
}