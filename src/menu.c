#include <stdio.h>

char w[] = "Hello, alex!\r\n";

void printMe() {
    printf("Hello, world!\r\n%s\nPTR is: %p\r\n", w, w);
    
    char c = getchar();
    printf("Char code: %x\r\n", c);
}

void main() {
    printMe();
}