#include	<stdio.h>

/**
 *	@param	a	->	Number to compare
 *	@param	b	->	Other number to compare
 *
 *	@brief	Compare two numbers
 *
 *	The first and simplest unit test: number comparison
 *	Bool doesn't exist before C23 so we use classic int true(1)/false(0)
 *	assignment
 */

const	unsigned	int	test_comparison_function(const	int	a,	const	int	b)	{
	if	(a	<	b)	{
		return	1;
	}	else	{
		return	0;
	}
}


int	main()	{

	printf("Entry point!\n");


	//	The C Compiler is a thing of wonder
	const	unsigned	int	result	=	test_comparison_function(4,	5);
	if	(result	==	0)	{
		printf("Failed!\n");
	}	else	{
		printf("Passed!\n");
	}

	return	0;
}
