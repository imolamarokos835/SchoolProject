
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;

    printf("What is %d multiplied by %d?\n", num1, num2);

    int answer;
    scanf("%d", &answer);

    if (num1 * num2 == answer) {
        printf("Correct!\n");
    } else {
        printf("Incorrect. The correct answer is %d\n", num1 * num2);
    }

    return 0;
}