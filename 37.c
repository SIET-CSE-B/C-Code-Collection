#include <stdio.h>
int main() {
    int arr[5], even = 0, odd = 0;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d, Odd: %d", even, odd);
    return 0;
}