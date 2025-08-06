#include <stdio.h>

int main() {
    int a[10], i, even = 0, odd = 0;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even: %d, Odd: %d\n", even, odd);
    return 0;
}
