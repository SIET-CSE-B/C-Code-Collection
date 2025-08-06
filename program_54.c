#include <stdio.h>
int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z')
        ch = ch - 32;
    printf("Uppercase: %c", ch);
    return 0;
}