// License: CC BY-NC-SA 4.0
/*
 * task1.c
 *
 * Stack
 *
 * Written by AlexeyFilich
 * 22 mar 2021
 */

#include <stdio.h>

#define STORAGE_OPTIMAL

#include "Interactions.h"
#include "storage/Storage.h"

int main(int argc, char* args[]) {
    int value;
    Stack * stk;
    aStackInit(&stk);
    for (int i = 0; i < 10; i++) {
        aScanCheck("Input number: ", "%d", &value);
        aStackPushI(&stk, value);
    }
    while (stk != NULL) {
        printf("Stack: %d\n", aStackTopAs(&stk, int));
        aStackPop(&stk);
    }
    return 0;
}
