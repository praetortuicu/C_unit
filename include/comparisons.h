/**
 *	List of comparison macros necessary for unit testing.
 *	Date	07/06/25
 *	Author	Teodor	Ticu
 *	Version	0.0.2
 *
 */


#ifndef	COMPARISONS_H
#define	COMPARISONS_H

#include	"error_codes.h"

/*
 *	@param	value1	Value to check
 *	@param	value2	Other value to check
 *
 * 	@brief	Equality check on two values.
 */
#define	CHECK_EQ(value1,	value2)	\
if	(value1	==	value2)	{\
	printf("Equality test passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("Equality test failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\

/*
 *	@param	value1	Value to check
 *	@param	value2	Other value to check
 *
 * 	@brief	Inequality check on two values.
 */
#define	CHECK_NOT_EQUAL(value1,	value2)	\
if	(value1	!=	value2)	{\
	printf("Inquality test passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("Inequality test failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\






#endif
