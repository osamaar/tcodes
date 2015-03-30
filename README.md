tcodes - Terminal Codes
=========
Use ANSI escape sequences to print formatted and
coloured text/symbols/background to the terminal.

Usage
-----
Include 'tcodes.h'. Compile and link with your program. 
API in 'tcodes.h' should be self-explanatory.
Use tc_printf with tcstyle argument bit masks to print
ansi-formatted text to stdout. Should work correctly with
ANSI-supported terminals/terminal-emulators.

TODO
----
- add Makefile to copile to a static/dynamic library file.
- try to see how cross-platform can it be (linux - os x - windows).

*This software is licensed under MIT license. See LICENSE file for details.*
