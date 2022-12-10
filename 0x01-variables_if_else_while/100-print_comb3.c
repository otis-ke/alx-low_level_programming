#include <stdio.h>
/**
 * main - Entry
 *
 * Description: 'Two number combinations'
 *
 *Return: 0(Success)
 */
int main(void)
{
	int a;
	int i;

	for (a = 48; a <= 56; a++)
	{
		for (i = a + 1; i <= 57; i++)
		{
			putchar(a);
			if (a != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

