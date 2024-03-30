/*
#include <stdio.h>
int main() {
    int x = -5;
    printf("%d\n", x % 3); // Prints -2 instead of 1
    return 0;
}
 */
 #include <stdio.h>
int main() {
    int x = 5; // 101 in binary
    int y = 3; // 011 in binary
    printf("%d\n", x & y); // Prints the result of bitwise AND: 001 (1 in decimal)
    printf("%d\n", x | y); // Prints the result of bitwise OR: 111 (7 in decimal)
    printf("%d\n", ~x);    // Prints the result of bitwise NOT: 11111010 (-6 in decimal)
    return 0;
}

