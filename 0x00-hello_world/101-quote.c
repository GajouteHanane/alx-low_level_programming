#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char	A[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(A, 59, 1, stderr);
	return (1);
}
