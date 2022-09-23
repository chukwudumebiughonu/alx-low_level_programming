Skip to content
Gedeon-obae
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x00-hello_world/101-quote.c
@Gedeon-obae
Gedeon-obae that prints exactly and that piece of art is useful
 1 contributor
Executable File  14 lines (13 sloc)  325 Bytes
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Gideon Obae, 2021-08-26",
 * followed by a new line, to the standard error.
 * Return: 1 if success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
