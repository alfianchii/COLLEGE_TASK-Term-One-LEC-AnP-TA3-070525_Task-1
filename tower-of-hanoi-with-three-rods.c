#include <stdio.h>
#define START_ROD 1
#define END_ROD 3

void print_move(int start, int end) {
    printf("%d -> %d\n", start, end);
}

void hanoi(int n, int start, int end) {
    if (n == 1) {
        print_move(start, end);
        return;
    }
}

int sum_of_start_to_end(int start, int end) {
    int sum = start;

    while (start < end)
    {
        sum += end;
        --end;
    }

    return sum;
}

int main() {
    int amountOfDisk = 3;

    hanoi(amountOfDisk, START_ROD, END_ROD);

    int result = sum_of_start_to_end(START_ROD, END_ROD);
    printf("The result of sum is: %d", result);

    return 0;
}