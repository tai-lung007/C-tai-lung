#include<stdio.h>
int main()
{
    //dereferncing
        /*int x = 10;
        int *ptr = &x; // Pointer ptr stores the address of variable x
        printf("Value of x: %d\n", *ptr); // Dereferencing ptr to access the value of x */
     //pointer arithmetic
        int arr[5] = {1, 2, 3, 4, 5};
        int *ptr = arr; // Points to the first element of the array
        printf("%d\n", *(ptr++)); // Accesses the first element and moves ptr to the next element
        printf("%d\n", *(++ptr)); // Accesses the third element directly




return 0;
}
