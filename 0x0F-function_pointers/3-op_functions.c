#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds 2 numbers
 * @a: integer1
 * @b: integer2
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtructs 2 numbers
 * @a: int a
 * @b: int b
 * Return: difference of a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: int a
 * @b: int b
 * Return: multiplication of a & b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides 2 numbers
 * @a: int a
 * @b: int b
 * Return: division of a & b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus 2 numbers
 * @a: int a
 * @b: int b
 * Return: 0 or 1
 */
int op_mod(int a, int b)
{
	return (a % b);
}
