/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Dishwasher
//!	Generated Date	: Thu, 26, Nov 2015  
	File Path	: Test\Debug\Dishwasher.h
*********************************************************************/

#ifndef Dishwasher_H
#define Dishwasher_H

#include <oxf\Ric.h>
#include "Default.h"
#include <oxf\RiCTask.h>
#include <oxf\RiCReactive.h>
#include <oxf\RiCEvent.h>
#define Dishwasher_Timeout_drying_id 3

#define Dishwasher_Timeout_rinsing_id 2

#define Dishwasher_Timeout_washing_id 1

/*## package Default */

/*## class Dishwasher */
typedef struct Dishwasher Dishwasher;
struct Dishwasher {
    RiCReactive ric_reactive;
    int cycles;		/*## attribute cycles */
    int dryTime;		/*## attribute dryTime */
    int rinseTime;		/*## attribute rinseTime */
    int washTime;		/*## attribute washTime */
    int rootState_subState;
    int rootState_active;
    int service_subState;
    int service_active;
    int running_subState;
    int running_active;
    int on_subState;
    int on_lastState;
    int mode_subState;
    int mode_active;
};

/***    User implicit entries    ***/


/* Constructors and destructors:*/

/*## operation Init() */
void Dishwasher_Init(Dishwasher* const me, RiCTask * p_task);

void Dishwasher_Cleanup(Dishwasher* const me);

Dishwasher * Dishwasher_Create(RiCTask * p_task);

void Dishwasher_Destroy(Dishwasher* const me);

RiCBoolean Dishwasher_startBehavior(Dishwasher* const me);

/***    Framework entries    ***/

/* rootState: */
int Dishwasher_rootState_IN(const Dishwasher* const me);

/* Active: */
int Dishwasher_Active_IN(const Dishwasher* const me);

void Dishwasher_Active_exit(Dishwasher* const me);

/* service: */
int Dishwasher_service_IN(const Dishwasher* const me);

/* normal: */
int Dishwasher_normal_IN(const Dishwasher* const me);

/* faulty: */
int Dishwasher_faulty_IN(const Dishwasher* const me);

/* running: */
int Dishwasher_running_IN(const Dishwasher* const me);

/* open: */
int Dishwasher_open_IN(const Dishwasher* const me);

/* on: */
int Dishwasher_on_IN(const Dishwasher* const me);

void Dishwasher_onEntDef(Dishwasher* const me);

void Dishwasher_on_exit(Dishwasher* const me);

void Dishwasher_on_entShallowHist(Dishwasher* const me);

RiCTakeEventStatus Dishwasher_on_takeEvent(Dishwasher* const me, short id);

/* washing: */
int Dishwasher_washing_IN(const Dishwasher* const me);

/* rinsing: */
int Dishwasher_rinsing_IN(const Dishwasher* const me);

/* drying: */
int Dishwasher_drying_IN(const Dishwasher* const me);

/* off: */
int Dishwasher_off_IN(const Dishwasher* const me);

/* mode: */
int Dishwasher_mode_IN(const Dishwasher* const me);

/* quick: */
int Dishwasher_quick_IN(const Dishwasher* const me);

/* intensive: */
int Dishwasher_intensive_IN(const Dishwasher* const me);

enum Dishwasher_Enum {
    Dishwasher_RiCNonState = 0,
    Dishwasher_Active = 1,
    Dishwasher_service = 2,
    Dishwasher_normal = 3,
    Dishwasher_faulty = 4,
    Dishwasher_running = 5,
    Dishwasher_open = 6,
    Dishwasher_on = 7,
    Dishwasher_washing = 8,
    Dishwasher_rinsing = 9,
    Dishwasher_drying = 10,
    Dishwasher_off = 11,
    Dishwasher_mode = 12,
    Dishwasher_quick = 13,
    Dishwasher_intensive = 14
};

#endif
/*********************************************************************
	File Path	: Test\Debug\Dishwasher.h
*********************************************************************/
