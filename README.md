Project printf

DESCRIPTION

This project is aimed at encouraging collaboration, thus it is a team project.

The printf function sends formatted output to stdout.In this project, a custom printf for lesarning puirposes was build by ALX-SE students- EUNICE and AMANI of cohort 10._printf() function format string is a character string, beginning and ending in its initial shift state, if any. These arguments are placed using the percentage '%' operator.

RESOURCES
Secrets of printf by Thomas Samuel: https://www.academia.edu/10297206/Secrets_of_printf_

AUTHORISED FUNCTIONS AND MACROS

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Compilation
Code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
We strongly encourage you to work all together on a set of tests
If the task does not specify what to do with an edge case, do the same as printf
The main files will include your main header file (main.h): #include main.h

USE AND EXAMPLES

Prototype: int _printf(const char *format, ...); Use - General: _printf("format string", var1, var2, ...);

Examples:

Basic String: _printf("%s Alx", "Hello");`

Output: Hello Alx
Print integers: _printf("This is an array element: arr[%d]:%c", 32, arr[32]);`

Output: This is an array element arr[32]:A
Many other specifiers and flags were added and by combinig those the _printf() function generate a different ouput. The following list are the specifiers and flags allowed.
Prints a string to the standard output, according to a given format
All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command gcc -Wall -Werror -Wextra -pedantic *.c
Returns the number of characters in the output string on success, -1 otherwise
Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters.

TASKS
These are all the tasks of this project, the ones that are completed link to the corresponding files.

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to format.
c : converts input into a character
s : converts input into a string

1. Education is when you read the fine print. Experience is what you get if you don't
Handle the following conversion specifiers:
d : converts input into a base 10 integer
i : converts input into an integer

2. With a face like mine, I do better in print
Handle the following conversion specifiers:
-b

3. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
-u
-x
-o
-x
-X

4. Nothing in fine print is ever good news
Use a local buffer of 1024 chars in order to call write as little as possible.

5. My weakness is wearing too much leopard print
Handle the following custom conversion specifier
-S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
Handle the following conversion specifier:
-p : int input is converted to a pointer address

7. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
- + : adds a + in front of signed positive numbers and a - in front of signed negative numbers
- space : same as +, but adds a space (is overwritten by +)
- # : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions

8. Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
- l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
- h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

9. Print some money and give it to us for the rain forests
Handle the field width for non-custom conversion specifiers.

10. The negative is the equivalent of the composer's score, and the print the performance
Handle the precision for non-custom conversion specifiers.

11. It's depressing when you're still around and your albums are out of print
Handle the 0 flag character for non-custom conversion specifiers.

12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
Handle the - flag character for non-custom conversion specifiers.

13. Print is the sharpest and the strongest weapon of our party
Handle the following custom conversion specifier:
- r : prints the reversed string
14. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:
- R : prints the rot13'ed string
15. *

All the above options work well together.

Authors

 -EUNICE - https://github.com/EUS-VICTORY

 -Amani - https://github.com/Amani1617
