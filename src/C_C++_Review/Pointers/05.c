/**
 * @brief Sample output and pointer arithmetic demonstration.
 *
 * Expected output:
 *   Position one: 12
 *   (Memory addresses will vary each execution)
 *   12 0x7fff773fe780
 *   24 0x7fff773fe784
 *   36 0x7fff773fe788
 *   48 0x7fff773fe78c
 *   60 0x7fff773fe790
 *
 * @details
 * - Incrementing the int* advances by 4 bytes (sizeof(int)).  
 * - On a 64-bit system, pointers themselves occupy 8 bytes, allowing far more than a 2^32-byte address space.  
 * - Array elements reside contiguously in memory, laid out sequentially rather than scattered.
 */


#include <stdio.h>

int main() {
    int arr[] = {12, 24, 36, 48, 60};

    int* ptr = arr;  // ptr points to the first element of arr (default in C)

    printf("Position one: %d\n", *ptr);  // Output: 12

    for (int i = 0; i < 5; i++) {
        printf("%d\t", *ptr);
        printf("%p\t", ptr);
        ptr++;
    }

}