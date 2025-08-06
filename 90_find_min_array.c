#include <stdio.h>

int main() {
    int arr[10], i, min;
    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for(i = 1; i < 10; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum element = %d\n", min);
    return 0;
}
