#include	<stdio.h>
#include	"../include/assertions.h"
#include	"../include/error_throwing.h"
#include	<errno.h>

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

int	test_func(int	a,	int	b)	{
	if	(a	<	b)	{
		errno	=	EBADMSG;
		return	-1;
	}	else if	(a	==	b)	{
		errno	=	EIO;
		return	-1;
	}	else	{
		errno	=	EPERM;
		return	-1;
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
	
	int	a	=	5;
	int	b	=	6;
	ASSERT_EQ(a,	b);
	ASSERT_EQ(5,	a);

	unsigned	int	test	=	5;
	int	break_it	=	5;
	ASSERT_EQ(test,	break_it);
	
	char	c1	=	'c';
	char	c2	=	'c';
	char	c3	=	'd';
	ASSERT_EQ(c1,	c2);
	ASSERT_EQ(c1,	c3);

	ASSERT_EQ(test,	c1);

	CHECK_THROWS(test_func(1,	2));
	CHECK_THROWS(test_func(2,	2));
	CHECK_THROWS(test_func(2,	1));

	CHECK_THROWS_ERROR(test_func(1,	2),	EBADMSG);

	return	0;
}
