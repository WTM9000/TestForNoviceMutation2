#include <stdio.h>

char get_grade(int score) {
    char grade;
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    return grade;
}

int is_passing(int score) {
    int passing = (score >= 60) ? 1 : 0;
    return passing;
}

double average(int *scores, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + scores[i];
    }
    double avg = (n > 0) ? (double)total / n : 0.0;
    return avg;
}

int count_passing(int *scores, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_passing(scores[i])) {
            count = count + 1;
        }
    }
    return count;
}

int main() {
    int scores[5] = {92, 75, 55, 88, 63};
    int n = 5;
    for (int i = 0; i < n; i++) {
        printf("Score %d -> grade %c\n", scores[i], get_grade(scores[i]));
    }
    printf("Average: %.1f\n", average(scores, n));
    printf("Passing: %d\n", count_passing(scores, n));
    return 0;
}
