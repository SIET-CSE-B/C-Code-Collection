#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i]; i++) {
        char ch = str[i];
        if(strchr("aeiouAEIOU", ch)) count++;
    }
    printf("Vowels: %d\n", count);
    return 0;
}
