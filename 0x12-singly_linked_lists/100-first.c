#include <stdio.h>
void startUpFncs(void) __attribute__ ((constructor));
/**
 * startUpFncs - fncs that executes before main function
 * @void: input
 * Return: return text
 */

void startUpFncs(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
