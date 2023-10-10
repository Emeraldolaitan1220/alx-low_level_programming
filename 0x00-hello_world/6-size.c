#include <stdio.h>

/**
 * main - Entry point
 * Discription :sizeof of  various types
 * Return: Always 0 success
 */
int main(void)

{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("size of float: %zu bytes\n", sizeof(float));
	printf("size of long int: %zu bytes\n", sizeof(long int));
	printf("size of long long int: %zu bytes\n", sizeof(long long int));
	return (0);
}
