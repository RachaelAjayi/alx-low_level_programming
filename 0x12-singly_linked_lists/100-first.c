#include <stdio.h>

void print_msg(void) __attribute__ ((constructor));

/**
 * print_msg - function prints a sentence before the main function is executed
 * Return: Nothing.
 */
void print_msg(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
