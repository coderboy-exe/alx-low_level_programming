#include "main.h"
/**
 * get_root - get the root of a number iteratively from zero
 *
 * @n: number
 * @root: iterative roots
 *
 * Return: square root
 */

int get_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}

	if (root * root == n)
	{
		return (root);
	}

	return (get_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns the square root of a number
 *
 * @n: number
 *
 * Return: '-1' if number has no natural square root, Result if otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (get_root(n, 0));
}
