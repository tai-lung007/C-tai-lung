#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char destination[20]; // Make sure the destination array has enough space

    // Copy the content of source to destination
    memcpy(destination, source, strlen(source) + 1);

    // Print the content of destination
    printf("Destination: %s\n", destination);

    return 0;
}

