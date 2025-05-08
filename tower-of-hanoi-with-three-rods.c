#include <stdio.h>
#define START_ROD 1
#define END_ROD 3

void print_move(int start, int end) {
    printf("%d -> %d\n", start, end);
}

int sum_of_start_to_end(int start, int end) {
    int sum = 1;

    while (start < end)
    {
        sum += end;
        --end;
    }

    return sum;
}

void hanoi(int n, int start, int end) {
    if (n == 1) {
        print_move(start, end);
        return;
    } else {
        int sumStartToEnd = sum_of_start_to_end(START_ROD, END_ROD);
        int other = sumStartToEnd - (start + end);
        hanoi(n - 1, start, other);
        print_move(start, end);
        hanoi(n - 1, other, end);
    }
}

int main() {
    int amountOfDisk = 4;

    hanoi(amountOfDisk, START_ROD, END_ROD);

    return 0;
}