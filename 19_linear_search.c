#include <stdio.h>
int main() {
    int a[5] = {4, 7, 1, 9, 2}, key, found = 0;
    printf("Enter key: ");
    scanf("%d", &key);
    for(int i = 0; i < 5; ++i) {
        if(a[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not found");
    return 0;
}