#include <stdio.h>

int main() {
    FILE *fp; // Declare a FILE pointer

    // Open a file for writing
    fp = fopen("example.txt", "w");
    
    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write to the file
    fprintf(fp, "This is a test file.");

    // Close the file
    fclose(fp);

    return 0;
}

