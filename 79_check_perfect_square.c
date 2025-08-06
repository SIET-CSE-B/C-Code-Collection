#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int root = sqrt(n);
    if(root * root == n)
        printf("Perfect square\n");
    else
        printf("Not perfect square\n");
    return 0;
}
