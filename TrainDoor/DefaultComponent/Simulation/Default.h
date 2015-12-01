/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: Simulation
	Model Element	: Default
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\Simulation\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

/*## auto_generated */
#include <oxf\Ric.h>
/*## auto_generated */
#include <oxf\RiCEvent.h>
/*#[ ignore */
#define evBPress_Default_id 18601

#define entered_Default_id 18602
/*#]*/

/*## auto_generated */
struct trainDoor;

/*## package Default */


#ifdef _OMINSTRUMENT
void Default_OMEvent_Init(void);
#endif /* _OMINSTRUMENT */

typedef struct evBPress evBPress;
/*## event evBPress() */
struct evBPress {
    RiCEvent ric_event;
};

/*## auto_generated */
void evBPress_Init(evBPress* const me);

/*## auto_generated */
void evBPress_Cleanup(evBPress* const me);

/*#[ ignore */
evBPress * RiC_Create_evBPress(void);

void RiC_Destroy_evBPress(evBPress* const me);
/*#]*/

typedef struct entered entered;
/*## event entered() */
struct entered {
    RiCEvent ric_event;
};

/*## auto_generated */
void entered_Init(entered* const me);

/*## auto_generated */
void entered_Cleanup(entered* const me);

/*#[ ignore */
entered * RiC_Create_entered(void);

void RiC_Destroy_entered(entered* const me);
/*#]*/

#endif
/*********************************************************************
	File Path	: DefaultComponent\Simulation\Default.h
*********************************************************************/
