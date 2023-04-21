#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Auth: Taoufik El Mahdaoui
 * Desc: The header file containing prototypes for all functions
 *       used in the 0x10. C-variadic_functions.
 */

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
