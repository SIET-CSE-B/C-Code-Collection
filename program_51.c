#include <stdio.h>
int main() {
    int n, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if(rev == temp)
        printf("Palindrome");
    else
        printf("Not a palindrome");
    return 0;
}