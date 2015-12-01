/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: trainDoor
	Model Element	: trainDoor
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\trainDoor\trainDoor.h
*********************************************************************/

#ifndef trainDoor_H
#define trainDoor_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Default.h"
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
#define trainDoor_Timeout_closing_id 3

#define trainDoor_Timeout_open_id 2

#define trainDoor_Timeout_opening_id 1
/*#]*/

/*## package Default */

/*## class trainDoor */
typedef struct trainDoor trainDoor;
struct trainDoor {
    RiCReactive ric_reactive;
    int closeTime;		/*## attribute closeTime */
    int openTime;		/*## attribute openTime */
    /*#[ ignore */
    int rootState_subState;
    int rootState_active;
    /*#]*/
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## operation Init() */
void trainDoor_Init(trainDoor* const me, RiCTask * p_task);

/*## auto_generated */
void trainDoor_Cleanup(trainDoor* const me);

/*## auto_generated */
trainDoor * trainDoor_Create(RiCTask * p_task);

/*## auto_generated */
void trainDoor_Destroy(trainDoor* const me);

/*## auto_generated */
RiCBoolean trainDoor_startBehavior(trainDoor* const me);

/***    Framework entries    ***/

/* rootState: */
/*## statechart_method */
int trainDoor_rootState_IN(const trainDoor* const me);

/* opening: */
/*## statechart_method */
int trainDoor_opening_IN(const trainDoor* const me);

/* open: */
/*## statechart_method */
int trainDoor_open_IN(const trainDoor* const me);

/* closing: */
/*## statechart_method */
int trainDoor_closing_IN(const trainDoor* const me);

/* closed: */
/*## statechart_method */
int trainDoor_closed_IN(const trainDoor* const me);

/*#[ ignore */
enum trainDoor_Enum {
    trainDoor_RiCNonState = 0,
    trainDoor_opening = 1,
    trainDoor_open = 2,
    trainDoor_closing = 3,
    trainDoor_closed = 4
};
/*#]*/

#endif
/*********************************************************************
	File Path	: DefaultComponent\trainDoor\trainDoor.h
*********************************************************************/
