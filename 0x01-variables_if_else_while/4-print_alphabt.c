#include <stdio.h>

/**
 * main - print alphabet in lowercase and exclude q and e
 * return : always 0 success
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z';c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return(0);
}
