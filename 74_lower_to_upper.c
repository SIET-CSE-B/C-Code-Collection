#include <stdio.h>

int main() {
    char ch;
    printf("Enter lowercase letter: ");
    scanf(" %c", &ch);
    if(ch >= 'a' && ch <= 'z')
        printf("Uppercase: %c\n", ch - 32);
    else
        printf("Not lowercase\n");
    return 0;
}
