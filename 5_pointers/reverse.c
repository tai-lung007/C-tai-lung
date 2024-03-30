#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0]; // Pointer points to the last element of the array

    printf("Array elements in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", *ptr--); // Print the element and move the pointer to the previous element
    }
    printf("\n");

    return 0;
}

