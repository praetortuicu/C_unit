/**
 *	List of assertion macros necessary for unit testing.
 *	Date	07/06/25
 *	Author	Teodor	Ticu
 *	Version	0.0.3
 *
 */



#ifndef	ASSERTIONS_H
#define	ASSERTIONS_H

#include	<stdio.h>
#include	"error_codes.h"

/*
 *	@param	Any value
 *	@param	Any other value
 *
 *	@brief	Basic equality assertion.
 */
#define	ASSERT_EQ(value1,	value2)	\
if	(value1	==	value2)	{\
	printf("Equality assertion passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else {\
	printf("Equality assertion failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\


/*
 *	@param	Any value
 *	@param	Any other value
 *
 *	@brief	Basic inequality assertion.
 */
#define	ASSERT_NOT_EQ(value1,	value2)	\
if	(value1	!=	value2)	{\
	printf("Inequality assertion passed. Exit code:	%d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("Inequality assertion failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\






#endif
