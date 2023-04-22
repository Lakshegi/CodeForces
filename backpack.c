/*
 * Backpack's capacity = W
 * N items : item's mass = wi
 * Fill backpack as full as possible
 * */

#include <stdio.h>
#include <stdlib.h>

int cmp ( const void *a, const void *b){
    return *((int*)a) > *((int*)b) ? 1 : *((int*)a) < *((int*)b) ? -1 : 0;
}

int
main(void)
{
    int w, n;
    scanf("%d%d", &w, &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof arr[0], cmp);
    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (k + arr[i] > w) {
            break;
        }
        k += arr[i];
    }
    printf("%d%%", (int)((double)(100 * k) / w));
}
