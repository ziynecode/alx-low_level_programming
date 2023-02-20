#include <stdio.h>
#include <unistd.h>
/**
   * main - entry point
   *Description: print alphabet in lowercase\n
   *Return: always 0 (successful)
   */
int main(void)
{
	int ch;
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}

