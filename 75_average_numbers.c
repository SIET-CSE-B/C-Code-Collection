#include <stdio.h>

int main() {
    int i, n, sum = 0, val;
    float avg;
    printf("How many numbers? ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &val);
        sum += val;
    }
    avg = (float)sum / n;
    printf("Average = %.2f\n", avg);
    return 0;
}
