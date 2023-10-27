#include <stdio.h>

char w[] = "Hello, world!\r\n";

int printHello() {
    printf("Hello, world!");
    return 0;
}

int menu() {
    int code = printHello();
    return code;
}