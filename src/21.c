#include <stdio.h>

void main() {
    int i;
    
    printf("Hello World!\n");
    
    // Add more statements to demonstrate the program's functionality
    
    while(i <= 5) {
        if (i == 3) break; // Example: printing "bye" after every 'a'
        printf("%d", i); // Print current value of i
        i++; // Increment i for next iteration
    }
}
