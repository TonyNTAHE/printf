##
printf project done Tony NTAHE, Daniel Omoaregba.

_printf - prints to the output string.

The project covers:
1. a function that produces output according to a format.
    It returns the number of characters printed(excluding the null byte used to end output to strings).
    The output is written to stdout, the standard output stream.
    The format is a character string. The format string is composed of zero or more directives. and handles the following conversion specificiers: c, s, %.

2. The functiion handles the d and i conversion specifiers.

3.  It also handle the custom conversion specifiers:
    b: the unsigned int argument is converted to binary.

4. It handles the u, o, x, X conversion specifiers

5. use a local buffer of 1024 chars in order to call write as 
    little as possible.

6. It handles the custom conversion specifier, S.
    s: prints the string.

7. It handles the p conversion specifier.

8. It handles the flags characters for non- custom conversion
    specifiers: +, space and #.

9. It handles the length modifiers for non-custom conversion
    specifiers: l, h.
    conversion specifiers to handle: d, i, u, o, x, X.

10. Handle the field width for non-custom conversion specifiers.

11. Handle the precision for non-custom conversation specifiers.

12. Handle the 0 flag character for non-custom conversion 
    specifiers.

13. Handle the - flag character for non-custom conversion 
    specifiers.

14. Handle the custom conversion specifiers:
    r: printst the reserved string
