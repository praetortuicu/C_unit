/**
 *	List of comparison macros necessary for unit testing.
 *	Date	07/06/25
 *	Author	Teodor	Ticu
 *	Version	0.0.3
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



/*
 *	@param	value1	Value to check
 *	@param	value2	Other value to check
 *
 * 	@brief	Less than check on two values.
 */
#define	CHECK_LESS_THAN(value1,	value2)	\
if	(value1	<	value2)	{\
	printf("Less than test passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("Less than test failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\


/*
 *	@param	value1	Value to check
 *	@param	value2	Other value to check
 *
 * 	@brief	Greater than check on two values.
 */
#define	CHECK_GREATER_THAN(value1,	value2)	\
if	(value1	>	value2)	{\
	printf("Greater than test passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("Greater than test failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\

/**
 *	@param	value	Value to check
 *	@param	min		Lower bound
 *	@param	max		Upper bound
 *
 *	@brief	Checks whether value is between min and max
 */
#define	CHECK_IN_RANGE(value,	min,	max)	\
if	(value	<=	max	&&	value	>=	min)	{	\
	printf("In range test passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("In range test failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\


/**
 *	@param	value	Value to check
 *	@param	min		Lower bound
 *	@param	max		Upper bound
 *
 *	@brief	Checks whether value is not between min and max
 */
#define	CHECK_NOT_IN_RANGE(value,	min,	max)	\
if	(value	>=	max	||	value	<=	min)	{	\
	printf("Not in range test passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("Not in range test failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\




#endif
