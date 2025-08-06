#include <stdio.h>

int main() {
    int i;
    printf("Even numbers between 1 and 20:\n");
    for(i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
