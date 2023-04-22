//https://codeforces.com/contest/363/problem/B

#include <stdio.h>
#include <stdlib.h>

typedef struct pair
{
    int first;
    int second;
} pair;

typedef struct queue
{
    int *arr;
    int sum;
    int start;
    pair min;
} queue;

void
queue_ctor(queue *this, int n, int k)
{
    this->arr = calloc(n, sizeof(int));
    this->sum = 0;
    for (int i = 0; i < k; ++i) {
        scanf("%d", &this->arr[i]);
        this->sum += this->arr[i];
    }
    this->start = 0;
    this->min.first = this->sum;
    this->min.second = 0;
}

void
queue_step(queue *this, int k)
{
    scanf("%d", &this->arr[this->start + k]);
    this->sum = this->sum - this->arr[this->start] + this->arr[this->start + k];
    if (++this->start, this->min.first > this->sum) {
        this->min.first = this->sum;
        this->min.second = this->start;
    }
}

void
queue_dtor(queue *this)
{
    free(this->arr);
}

int
main(void)
{
    int n, k;
    scanf("%d%d", &n, &k);

    queue q;
    queue_ctor(&q, n, k);

    for (int i = 0; i < n - k; ++i) {
        queue_step(&q, k);
    }

    printf("%d\n", q.min.second + 1);

    queue_dtor(&q);
}