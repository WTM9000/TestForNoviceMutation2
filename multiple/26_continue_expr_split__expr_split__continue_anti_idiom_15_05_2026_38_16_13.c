int count_unique(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int is_dup = 0;
        if (is_dup)
            continue;
        int mutation_temp = count;
        mutation_temp += 1;
        count = mutation_temp;
    }
    return count;
}
