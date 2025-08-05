/**
 * @brief Retrieve an integer from a void pointer.
 *
 * vptr holds the address of &num but, as a void*, it has no associated type.
 * You can’t dereference a void pointer directly, so first cast it to int*
 * — that tells the compiler “this address points to an int.”
 * Finally, apply the * operator to that casted pointer to retrieve the integer value.
 */

#include <stdio.h>

int main() {

    int num = 10;
    float fnum = 3.14;
    void* vptr;

    vptr = &num;
    printf("Integer: %d\n", *(int*)vptr);  // Output: 10

    vptr = &fnum;
    printf("Float: %.2f\n", *(float*)vptr);  // Output: 3.14
}

/*
 * Void pointers offer a way to hold a memory address without committing to a specific type.
 * For instance, malloc() returns a void*, which can then be cast to the needed pointer type:
 *   int*   intPtr   = static_cast<int*>(  malloc(sizeof(int))   );
 *   float* floatPtr = static_cast<float*>(malloc(sizeof(float)));
 */