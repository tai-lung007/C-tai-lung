#include <stdio.h>

// Global variable declaration
int globalVariable = 100;

// Function declarations
void function1(void);
void function2(void);

int main() {
    // Local variable declaration in main()
    int localVarMain = 200;

    printf("Inside main:\n");
    printf("Global variable: %d\n", globalVariable);
    printf("Local variable (main): %d\n", localVarMain);

    function1();
    function2();

    // Accessing global variable from main and modifying it
    globalVariable = 300;
    printf("\nInside main after modifying globalVariable:\n");
    printf("Global variable: %d\n", globalVariable);

    return 0;
}

void function1(void) {
    // Static variable declaration inside function1()
    static int staticVarFunction1 = 500;

    // Local variable declaration inside function1()
    int localVarFunction1 = 400;

    printf("\nInside function1:\n");
    printf("Global variable: %d\n", globalVariable);
    printf("Static variable (function1): %d\n", staticVarFunction1);
    printf("Local variable (function1): %d\n", localVarFunction1);

    // Modifying static variable inside function1()
    staticVarFunction1 += 50;
}

void function2(void) {
    // Static variable declaration inside function2()
    static int staticVarFunction2 = 700;

    // Local variable declaration inside function2()
    int localVarFunction2 = 600;

    printf("\nInside function2:\n");
    printf("Global variable: %d\n", globalVariable);
    printf("Static variable (function2): %d\n", staticVarFunction2);
    printf("Local variable (function2): %d\n", localVarFunction2);

    // Modifying static variable inside function2()
    staticVarFunction2 -= 100;
}

