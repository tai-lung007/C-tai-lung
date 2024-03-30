#include <stdio.h>


void printMessage(const char *message) {
printf("Message: %s\n", message);
}


void callFunction(void (*func)(const char *), const char *message) {

func(message);
}

int main() {

void (*messagePrinter)(const char *);

printf("messagePrinter %p\n",messagePrinter);

printf("----------------------------\n");


messagePrinter = printMessage;
printf("returnvalue of printMessage() is %p\n",&printMessage);
printf("returnvalue of printMessage() is %p\n",printMessage);
printf("messagePrinter %p\n",*messagePrinter);
printf("messagePrinter %p\n",messagePrinter);
printf("messagePrinter address %p\n",&messagePrinter);


messagePrinter("Hello, Function Pointer!");


callFunction(printMessage, "Function Pointer as an Argument");

return 0;


}
