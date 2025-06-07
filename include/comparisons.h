#ifndef	COMPARISONS_H
#define	COMPARISONS_H

#include	"error_codes.h"

#define	CHECK_EQ(value1,	value2)	\
if	(value1	==	value2)	{\
	printf("Equality test passed. Exit code: %d\n", ERROR_CODE_TRUE);	\
}	else	{\
	printf("Equality test failed. Exit code: %d\n", ERROR_CODE_FALSE);	\
}\




#endif
