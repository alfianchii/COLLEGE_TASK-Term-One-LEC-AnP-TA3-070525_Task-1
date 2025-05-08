#include <stdio.h>
#define START_ROD 1
#define END_ROD 3

void hanoi(int n, int start, int end) {
    if (n == 1) {
        printf("%d -> %d\n", start, end);
        return;
    }
}

int main() {
    int amountOfDisk = 1;

    hanoi(amountOfDisk, START_ROD, END_ROD);
    
    return 0;
}