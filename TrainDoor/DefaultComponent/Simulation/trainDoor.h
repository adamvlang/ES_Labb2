/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: DefaultComponent 
	Configuration 	: Simulation
	Model Element	: trainDoor
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\Simulation\trainDoor.h
*********************************************************************/

#ifndef trainDoor_H
#define trainDoor_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include "Default.h"
/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include <oxf\RiCReactive.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
#define trainDoor_Timeout_closing_id 5

#define trainDoor_Timeout_open_id 4

#define trainDoor_Timeout_opening_id 3

#define trainDoor_Timeout_butDisabled_id 2

#define trainDoor_Timeout_warning_id 1
/*#]*/

/*## package Default */

/*## class trainDoor */
typedef struct trainDoor trainDoor;
struct trainDoor {
    RiCReactive ric_reactive;
    int closeTime;		/*## attribute closeTime */
    int openTime;		/*## attribute openTime */
    int stopTime;		/*## attribute stopTime */
    /*#[ ignore */
    int rootState_subState;
    int rootState_active;
    int state_14_subState;
    int state_14_active;
    int state_13_subState;
    int state_13_active;
    int atPlatform_subState;
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

/* Active: */
/*## statechart_method */
int trainDoor_Active_IN(const trainDoor* const me);

/*## statechart_method */
void trainDoor_Active_exit(trainDoor* const me);

/* state_14: */
/*## statechart_method */
int trainDoor_state_14_IN(const trainDoor* const me);

/* warning: */
/*## statechart_method */
int trainDoor_warning_IN(const trainDoor* const me);

/* butEnabled: */
/*## statechart_method */
int trainDoor_butEnabled_IN(const trainDoor* const me);

/* butDisabled: */
/*## statechart_method */
int trainDoor_butDisabled_IN(const trainDoor* const me);

/* state_13: */
/*## statechart_method */
int trainDoor_state_13_IN(const trainDoor* const me);

/* notAtplatform: */
/*## statechart_method */
int trainDoor_notAtplatform_IN(const trainDoor* const me);

/* atPlatform: */
/*## statechart_method */
int trainDoor_atPlatform_IN(const trainDoor* const me);

/*## statechart_method */
void trainDoor_atPlatform_exit(trainDoor* const me);

/*## statechart_method */
RiCTakeEventStatus trainDoor_atPlatform_takeEvent(trainDoor* const me, short id);

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
    trainDoor_Active = 1,
    trainDoor_state_14 = 2,
    trainDoor_warning = 3,
    trainDoor_butEnabled = 4,
    trainDoor_butDisabled = 5,
    trainDoor_state_13 = 6,
    trainDoor_notAtplatform = 7,
    trainDoor_atPlatform = 8,
    trainDoor_opening = 9,
    trainDoor_open = 10,
    trainDoor_closing = 11,
    trainDoor_closed = 12
};
/*#]*/

#endif
/*********************************************************************
	File Path	: DefaultComponent\Simulation\trainDoor.h
*********************************************************************/
