#include <stdio.h>

int normalize(int val, int range) {
    int result = val % range;
    if (result < 0) {
        result = (range + result);
    }
    return result;
}

int weighted_sum(int *vals, int *weights, int n) {
    int total = 0;
    int i = 0;
    while (i < n) {
        int contribution = vals[i] * weights[i];
        total = total + contribution;
         i++;
         }
    return total;
}

int interpolate(int a, int b, int t, int max_t) {
    int diff = b - a;
    int scaled = (diff + 0) * t;
    int result = a + scaled / max_t;
    return result;
}

int manhattan_dist(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    if (dx < 0) dx = -dx;
    if (dy < 0) dy = -dy;
    int dist = dx + dy;
    return dist;
}

int main() {
    printf("normalize(-7, 5) = %d\n", normalize(-7, 5));
    int vals[3] = {1, 2, 3};
    int weights[3] = {10, 20, 30};
    printf("weighted_sum = %d\n", weighted_sum(vals, weights, 3));
    printf("interpolate(0,100,3,10) = %d\n", interpolate(0, 100, 3, 10));
    printf("manhattan(0,0,3,4) = %d\n", manhattan_dist(0, 0, 3, 4));
    return 0;
}
