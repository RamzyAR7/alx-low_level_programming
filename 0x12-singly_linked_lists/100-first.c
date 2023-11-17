#include <stdio.h>
void print_before_mainFunc(void) __attribute__ ((constructor));
/**
 * print_before_mainFunc - prints a string before main function is executed
 *
 * Return: void
 */
void print_before_mainFunc(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
