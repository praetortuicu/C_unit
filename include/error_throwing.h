/**
 *	List of error handling macros useful for unit testing
 *	Author	Teodor	Ticu	
 *	Version	0.0.2
 *
 */


#ifndef	ERROR_THROWING_H
#define	ERROR_THROWING_H

#include	<stdio.h>
#include	"error_codes.h"
#include	<errno.h>

/**
 *	@param	Pointer to function being tested
 *
 *	@brief	Check that the function returns an error code. In C, errors are
 *	just int values. For a full list of error codes check the GNU C project.
 */
#define	CHECK_THROWS(test_func)	\
do	{	\
	errno	=	0;	\
	test_func;	\
	if	(errno	!=	0)	{	\
		printf("Error %d thrown! Exit code:	%d\n", errno, ERROR_CODE_TRUE);	\
	}	else	{\
		printf("No error thrown! Exit code:	%d\n", ERROR_CODE_FALSE);	\
	}\
}	while	(0)	\

/** @param	Pointer to function being tested
 *	@param	errorno which is expected
 *
 *	@brief	Check that a certain error is returned by the function.
 */
#define CHECK_THROWS_ERROR(test_func, expected_errno)	\
do	{\
	errno	=	0;	\
	test_func;	\
	if	(errno	==	expected_errno)	{	\
		printf("Function throws error %d! Exit code: %d\n",	expected_errno,	ERROR_CODE_TRUE);	\
	}	else	{	\
		printf("Function throws wrong error (expected %d, got %d)! Exit code:	%d\n",	expected_errno,	errno,	ERROR_CODE_FALSE);	\
	}	\
}	while	(0)\


#endif
