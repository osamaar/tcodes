/*
 * tcodes - Terminal Codes
 * try lib functionality
 *
 * Copyright (c) 2015 Osama Arafa <osama.arafa@outlook.com>
 * Licensed under MIT license. See LICENSE file for details.
 */

#include <stdio.h>
#include "tcodes.h"

void test_tc_printf(void);

int main(int argc, char *argv[]){
    test_tc_printf();
}

void test_tc_printf(void){
    tc_printf(TCSTYLE_FCRED | TCSTYLE_BCLGRAY,
                "~~ ORIGINAL MESSAGE: This is test..."
                "int: %d & str %s ~~", 99, "STRING");
    printf("\n");

    tc_printf(TCSTYLE_FCBLACK | TCSTYLE_BCWHITE,
              "Black On White!");
    printf("\n");

    tc_printf(TCSTYLE_FCLYELLOW | TCSTYLE_BCBLUE,
              "Yellow On Blue!");
    printf("\n");

    printf("back to normal printf\n");
}
