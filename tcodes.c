/*
 * tcodes - Terminal Codes
 * Use ANSI escape sequences to print formatted and
 * coloured text/symbols/background to the terminal.
 *
 * Copyright (c) 2015 Osama Arafa <osama.arafa@outlook.com>
 * Licensed under MIT license. See LICENSE file for details.
 */

#include <stdio.h>
#include <stdarg.h>
#include "tcodes.h"

int tc_printf(const long tcstyle, const char *format, ...){
    va_list argp;
    va_start(argp, format);
    return vtc_printf(tcstyle, format, argp);
    va_end(argp);
}

int vtc_printf(const long tcstyle, const char *format, va_list argp){
    printf("vtc_printf(): called with tcstyle=0%lo\n", tcstyle);
    printf("vtc_printf(): calling vprintf()\n");

    /* print escape sequences */
    if (tcstyle & TCSTYLE_RESET)        printf(TC_RESET);

    if (tcstyle & TCSTYLE_FCDEFAULT )        printf(TC_FCDEFAULT );
    if (tcstyle & TCSTYLE_FCBLACK   )        printf(TC_FCBLACK   );
    if (tcstyle & TCSTYLE_FCRED     )        printf(TC_FCRED     );
    if (tcstyle & TCSTYLE_FCGREEN   )        printf(TC_FCGREEN   );
    if (tcstyle & TCSTYLE_FCYELLOW  )        printf(TC_FCYELLOW  );
    if (tcstyle & TCSTYLE_FCBLUE    )        printf(TC_FCBLUE    );
    if (tcstyle & TCSTYLE_FCMAGENTA )        printf(TC_FCMAGENTA );
    if (tcstyle & TCSTYLE_FCCYAN    )        printf(TC_FCCYAN    );
    if (tcstyle & TCSTYLE_FCLGRAY   )        printf(TC_FCLGRAY   );
    if (tcstyle & TCSTYLE_FCDGRAY   )        printf(TC_FCDGRAY   );
    if (tcstyle & TCSTYLE_FCLRED    )        printf(TC_FCLRED    );
    if (tcstyle & TCSTYLE_FCLGREEN  )        printf(TC_FCLGREEN  );
    if (tcstyle & TCSTYLE_FCLYELLOW )        printf(TC_FCLYELLOW );
    if (tcstyle & TCSTYLE_FCLBLUE   )        printf(TC_FCLBLUE   );
    if (tcstyle & TCSTYLE_FCLMAGENTA)        printf(TC_FCLMAGENTA);
    if (tcstyle & TCSTYLE_FCLCYAN   )        printf(TC_FCLCYAN   );
    if (tcstyle & TCSTYLE_FCWHITE   )        printf(TC_FCWHITE   );

    if (tcstyle & TCSTYLE_BCDEFAULT )        printf(TC_BCDEFAULT );
    if (tcstyle & TCSTYLE_BCBLACK   )        printf(TC_BCBLACK   );
    if (tcstyle & TCSTYLE_BCRED     )        printf(TC_BCRED     );
    if (tcstyle & TCSTYLE_BCGREEN   )        printf(TC_BCGREEN   );
    if (tcstyle & TCSTYLE_BCYELLOW  )        printf(TC_BCYELLOW  );
    if (tcstyle & TCSTYLE_BCBLUE    )        printf(TC_BCBLUE    );
    if (tcstyle & TCSTYLE_BCMAGENTA )        printf(TC_BCMAGENTA );
    if (tcstyle & TCSTYLE_BCCYAN    )        printf(TC_BCCYAN    );
    if (tcstyle & TCSTYLE_BCLGRAY   )        printf(TC_BCLGRAY   );
    if (tcstyle & TCSTYLE_BCDGRAY   )        printf(TC_BCDGRAY   );
    if (tcstyle & TCSTYLE_BCLRED    )        printf(TC_BCLRED    );
    if (tcstyle & TCSTYLE_BCLGREEN  )        printf(TC_BCLGREEN  );
    if (tcstyle & TCSTYLE_BCLYELLOW )        printf(TC_BCLYELLOW );
    if (tcstyle & TCSTYLE_BCLBLUE   )        printf(TC_BCLBLUE   );
    if (tcstyle & TCSTYLE_BCLMAGENTA)        printf(TC_BCLMAGENTA);
    if (tcstyle & TCSTYLE_BCLCYAN   )        printf(TC_BCLCYAN   );
    if (tcstyle & TCSTYLE_BCWHITE   )        printf(TC_BCWHITE   );

 
    /* print text itself */
    int ret =  vprintf(format, argp);

    /* finally go back to normal */
    printf(TC_RESET);
    return ret;
}


