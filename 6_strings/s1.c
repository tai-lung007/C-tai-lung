#include<stdio.h>

int main(void) {
    char str[] = "INDIA";
    int i;

    for(i = 0; str[i] != '\0'; i++) {
        printf("Character = %c \t Decimal = %d \t Hexadecimal = %x \t Octal = %o\n", str[i], str[i], str[i], str[i]);
        printf("Address = %p \t Decimal = %lu \t Hexadecimal = %lx \t Octal = %lo\n", (void*)&str[i], (unsigned long)&str[i], (unsigned long)&str[i], (unsigned long)&str[i]);
    }

    return 0;
}

