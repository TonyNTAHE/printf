##
printf project done Tony NTAHE, Daniel Omoaregba.

The aim of this project is to be able to create our own printf. This convers the different ways strings are handled and it's display to standard output stream

The function name used was:
_printf - prints formatted text to the standard output stream.

This project is divided into diffferent tasks. This makes it easy to create the prject. The numbering is base on what was covered in each task.

The project is to covers the following:
0. Writing a function that produces output according to a format.
    It returns the number of characters printed(excluding the null byte used to end output to strings).
    The output is written to the standard output stream (stdout).
    The format used is a character string. It handles different conversion specifiers or placeholders. The conversion specifiers used in task 1 are: c, s, %.

1. Tasks 1 focus on handling of some conversion specifiers: d 
    and i.
    i - is the conversion specifier for int data type
    d - is also use as the conversion specifier for int data type

2. Task 2 involves handling the custom conversion specifier, b.
    b: unsigned int argument converted to binary.

3. This task involves handling the u, o, x, X conversion
    specifiers.
    u - is the conversion specifier for unsigned int
    0 - is the conversion specifier for octal. the decimal value is converted to an octal value
    x - is the conversion specifier for lowercase Hexadecimal characters. a to e for 10 to 15 respectively
    X - is the conversion specifier for uppercase Hexadecimal characteres. A to E for 10 to 15 respectively.

4. Task 4 uses a local buffer of 1024 chars in order to call write as little as possible.

5. Task 5 handles the custom conversion specifier, S.
    s: prints the string.
    it also involves Non printable characters printed in a certain way: \x followed by the ASCII code value in hexadecimal.

6. Task 6 involes the p conversion specifier.
    p - is the conversion specifier for address and pointer.

7. In this Task we are to handles the flags characters for non- custom conversion specifiers: +, space and #.

8. task 8 looks at handleing the length modifiers for 
    non-custom conversion specifiers: l, h.
    conversion specifiers to handle: d, i, u, o, x, X.
    The non-custom conversion will be combine with the conversion specifiers.

9. This task (9) focus on Handling the field width for non-custom conversion specifiers.

10. This task (10) focus on Handling the precision for non-custom conversation specifiers.

11. this task (11) focus on Handling the 0 flag character for non-custom conversion specifiers.

12. This task (12) focus on Handling the -flag character for non-custom conversion specifiers.

13. This task (13) focus on Handling the custom conversion specifiers:
    r: printst the reserved string

14. This task (14) focus on Handling the following custom conversion specifier:
    R: prints the rot13'ed string.

15. All of these are working well.