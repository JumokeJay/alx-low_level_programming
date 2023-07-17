#include <stdio.h>
/* main - Entry point that covers the entire code
 * Return: always 0 (success)
 * dont know whats wrong with the description of my main
 */
int main()
{
	char lowercase = 'a';
	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}

	char uppercase = 'a';
	while (uppercase <= 'z')
	{
	putchar(uppercase);
	uppercase++;
	}

	putchar('\n');
	return 0;
}
