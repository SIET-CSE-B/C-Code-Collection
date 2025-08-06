#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i]; i++) {
        char c = str[i] | 32;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    printf("Vowels: %d", count);
    return 0;
}