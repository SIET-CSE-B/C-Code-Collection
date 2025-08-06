#include <stdio.h>
int main() {
    char ch;
    printf("Enter lowercase char: ");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("Uppercase: %c", ch - 32);
    else
        printf("Not lowercase");
    return 0;
}