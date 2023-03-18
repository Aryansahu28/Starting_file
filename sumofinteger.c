#include <stdio.h>

int main() {
    int count = 0, sum = 0;
    
    for (int i = 101; i < 200; i++) {
        if (i % 7 == 0) {
            count++;
            sum += i;
        }
    }
    
    printf("Number of integers divisible by 7: %d\n", count);
    printf("Sum of integers divisible by 7: %d\n", sum);
    
    return 0;
}
