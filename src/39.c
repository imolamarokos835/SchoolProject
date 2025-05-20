#include <stdio.h>

int main() {
    int num1 = 5;
    int num2 = 3;

    if (num1 > num2) {
        printf("Num 1 is greater than Num 2\n");
    } else if (num1 == num2) {
        printf("Num 1 is equal to Num 2\n");
    } else {
        printf("Num 1 is less than Num 2\n");
    }

    return 0;
}
