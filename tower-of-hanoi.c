#include <stdio.h>

void hanoi(int n, int start, int end) {
    if (n == 1) {
        printf("%d -> %d\n", start, end);
        return;
    }
}

int main() {
    int amountOfDisk = 1;
    int startRod = 1;
    int endRod = 3;

    hanoi(amountOfDisk, 1, 3);
    
    return 0;
}