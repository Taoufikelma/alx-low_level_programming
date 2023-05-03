#include "3-calc.h"

/**
 * op_add - addition of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctract 2 numbers.
 * @a: first number
 * @b: second number
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplie 2 numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: mul of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first number
 * @b: second numbe
 *
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calcuate the module of 2 number
 * @a: first number
 * @b: second number.
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
