/*
 * File: 0-sum_them_all.c
 * Auth: Taoufik El Mahdaoui
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its paramters.
 * @n: The number of paramters.
 * @...: A variable number of paramters.
 *
 * Return: If n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
