#include <stdio.h>

/**
 * mystartupfun - apply
 * is executed before main()
 */

void mystartupfun(void) __attribute__((constructor));

/**
 * mystartupfun - implementation of mystartupfun
 */

void mystartupfun(void)
{
	printf("You are the beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
