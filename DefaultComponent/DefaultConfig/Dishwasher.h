/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dishwasher
//!	Generated Date	: Tue, 24, Nov 2015  
	File Path	: DefaultComponent\DefaultConfig\Dishwasher.h
*********************************************************************/

#ifndef Dishwasher_H
#define Dishwasher_H

#include <oxf\Ric.h>
/*## package Default */

/*## class Dishwasher */
typedef struct Dishwasher Dishwasher;
struct Dishwasher {
    int cycles;		/*## attribute cycles */
    int dryTime;		/*## attribute dryTime */
    int rinseTime;		/*## attribute rinseTime */
    int washTime;		/*## attribute washTime */
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

void Dishwasher_Init(Dishwasher* const me);

void Dishwasher_Cleanup(Dishwasher* const me);

Dishwasher * Dishwasher_Create(void);

void Dishwasher_Destroy(Dishwasher* const me);

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dishwasher.h
*********************************************************************/
