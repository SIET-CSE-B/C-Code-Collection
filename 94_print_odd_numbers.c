#include <stdio.h>

int main() {
    int i;
    printf("Odd numbers between 1 and 20:\n");
    for(i = 1; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
