/*
 * tcodes - Terminal Codes
 * Use ANSI escape sequences to print formatted and
 * coloured text/symbols/background to the terminal.
 *
 * Copyright (c) 2015 Osama Arafa <osama.arafa@outlook.com>
 * Licensed under MIT license. See LICENSE file for details.
 */

#include <stdarg.h>

/* tcstyle argument masks */
/* not to self: hex values, mask with 1, 2, 4, 8, f */
#define TCSTYLE_RESET       0x0000000000000L

/* foreground colors */
#define TCSTYLE_FCDEFAULT   0x0000000000001L
#define TCSTYLE_FCBLACK     0x0000000000002L
#define TCSTYLE_FCRED       0x0000000000004L
#define TCSTYLE_FCGREEN     0x0000000000010L
#define TCSTYLE_FCYELLOW    0x0000000000020L
#define TCSTYLE_FCBLUE      0x0000000000040L
#define TCSTYLE_FCMAGENTA   0x0000000000100L
#define TCSTYLE_FCCYAN      0x0000000000200L
#define TCSTYLE_FCLGRAY     0x0000000000400L
#define TCSTYLE_FCDGRAY     0x0000000001000L
#define TCSTYLE_FCLRED      0x0000000002000L
#define TCSTYLE_FCLGREEN    0x0000000004000L
#define TCSTYLE_FCLYELLOW   0x0000000010000L
#define TCSTYLE_FCLBLUE     0x0000000020000L
#define TCSTYLE_FCLMAGENTA  0x0000000040000L
#define TCSTYLE_FCLCYAN     0x0000000100000L
#define TCSTYLE_FCWHITE     0x0000000200000L

/* background colors */
#define TCSTYLE_BCDEFAULT   0x0000000400000L
#define TCSTYLE_BCBLACK     0x0000001000000L
#define TCSTYLE_BCRED       0x0000002000000L
#define TCSTYLE_BCGREEN     0x0000004000000L
#define TCSTYLE_BCYELLOW    0x0000010000000L
#define TCSTYLE_BCBLUE      0x0000020000000L
#define TCSTYLE_BCMAGENTA   0x0000040000000L
#define TCSTYLE_BCCYAN      0x0000100000000L
#define TCSTYLE_BCLGRAY     0x0000200000000L
#define TCSTYLE_BCDGRAY     0x0000400000000L
#define TCSTYLE_BCLRED      0x0001000000000L
#define TCSTYLE_BCLGREEN    0x0002000000000L
#define TCSTYLE_BCLYELLOW   0x0004000000000L
#define TCSTYLE_BCLBLUE     0x0010000000000L
#define TCSTYLE_BCLMAGENTA  0x0020000000000L
#define TCSTYLE_BCLCYAN     0x0040000000000L
#define TCSTYLE_BCWHITE     0x0100000000000L

/* ansi escape sequences */
/* keep this local? */
#define TC_ESC          "\033["
#define TC_RESET        TC_ESC"0m"

/* foreground colors */
#define TC_FCDEFAULT    TC_ESC"39m"
#define TC_FCBLACK      TC_ESC"30m"
#define TC_FCRED        TC_ESC"31m"
#define TC_FCGREEN      TC_ESC"32m"
#define TC_FCYELLOW     TC_ESC"33m"
#define TC_FCBLUE       TC_ESC"34m"
#define TC_FCMAGENTA    TC_ESC"35m"
#define TC_FCCYAN       TC_ESC"36m"
#define TC_FCLGRAY      TC_ESC"37m"
#define TC_FCDGRAY      TC_ESC"90m"
#define TC_FCLRED       TC_ESC"91m"
#define TC_FCLGREEN     TC_ESC"92m"
#define TC_FCLYELLOW    TC_ESC"93m"
#define TC_FCLBLUE      TC_ESC"94m"
#define TC_FCLMAGENTA   TC_ESC"95m"
#define TC_FCLCYAN      TC_ESC"96m"
#define TC_FCWHITE      TC_ESC"97m"

/* Background Colors */
#define TC_BCDEFAULT    TC_ESC"49m"
#define TC_BCBLACK      TC_ESC"40m"
#define TC_BCRED        TC_ESC"41m"
#define TC_BCGREEN      TC_ESC"42m"
#define TC_BCYELLOW     TC_ESC"43m"
#define TC_BCBLUE       TC_ESC"44m"
#define TC_BCMAGENTA    TC_ESC"45m"
#define TC_BCCYAN       TC_ESC"46m"
#define TC_BCLGRAY      TC_ESC"47m"
#define TC_BCDGRAY      TC_ESC"100m"
#define TC_BCLRED       TC_ESC"101m"
#define TC_BCLGREEN     TC_ESC"102m"
#define TC_BCLYELLOW    TC_ESC"103m"
#define TC_BCLBLUE      TC_ESC"104m"
#define TC_BCLMAGENTA   TC_ESC"105m"
#define TC_BCLCYAN      TC_ESC"106m"
#define TC_BCWHITE      TC_ESC"107m"


int tc_printf(const long tcstyle, const char *format, ...);
int vtc_printf(const long tcstyle, const char *format, va_list argp);


