#include <stdio.h>
int main() {
    int num, rev = 0, rem, orig;
    printf("Enter a number: ");
    scanf("%d", &num);
    orig = num;
    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf(orig == rev ? "Palindrome" : "Not Palindrome");
    return 0;
}