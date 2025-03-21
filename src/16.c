#include <stdio.h>

int main() {
    int i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    if (n > 0) {
        for (i = 1; i <= n; i++) {
            printf("*");
        }
        printf("\n");
    } else {
        printf("Please enter a positive integer.\n");
    }

    return 0;
}
