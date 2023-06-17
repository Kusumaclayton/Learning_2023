/*2. Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators*/

#include <stdio.h>
void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31;  // Start with the leftmost bit
    for (i = 0; i < 32; i++) {
        // Use bitwise AND to check if the current bit is set
        if (num & mask)
            printf("1");
        else
            printf("0");

        // Shift the mask one bit to the right
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}