/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: Simulation
	Model Element	: Default
//!	Generated Date	: Mon, 7, Dec 2015  
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

#define rollOut_Default_id 18603

#define evEnable_Default_id 18604

#define evStop_Default_id 18605

#define svStop_Default_id 18606

#define evEnabled_Default_id 18607
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

typedef struct rollOut rollOut;
/*## event rollOut() */
struct rollOut {
    RiCEvent ric_event;
};

/*## auto_generated */
void rollOut_Init(rollOut* const me);

/*## auto_generated */
void rollOut_Cleanup(rollOut* const me);

/*#[ ignore */
rollOut * RiC_Create_rollOut(void);

void RiC_Destroy_rollOut(rollOut* const me);
/*#]*/

typedef struct evEnable evEnable;
/*## event evEnable() */
struct evEnable {
    RiCEvent ric_event;
};

/*## auto_generated */
void evEnable_Init(evEnable* const me);

/*## auto_generated */
void evEnable_Cleanup(evEnable* const me);

/*#[ ignore */
evEnable * RiC_Create_evEnable(void);

void RiC_Destroy_evEnable(evEnable* const me);
/*#]*/

typedef struct evStop evStop;
/*## event evStop() */
struct evStop {
    RiCEvent ric_event;
};

/*## auto_generated */
void evStop_Init(evStop* const me);

/*## auto_generated */
void evStop_Cleanup(evStop* const me);

/*#[ ignore */
evStop * RiC_Create_evStop(void);

void RiC_Destroy_evStop(evStop* const me);
/*#]*/

typedef struct svStop svStop;
/*## event svStop() */
struct svStop {
    RiCEvent ric_event;
};

/*## auto_generated */
void svStop_Init(svStop* const me);

/*## auto_generated */
void svStop_Cleanup(svStop* const me);

/*#[ ignore */
svStop * RiC_Create_svStop(void);

void RiC_Destroy_svStop(svStop* const me);
/*#]*/

typedef struct evEnabled evEnabled;
/*## event evEnabled() */
struct evEnabled {
    RiCEvent ric_event;
};

/*## auto_generated */
void evEnabled_Init(evEnabled* const me);

/*## auto_generated */
void evEnabled_Cleanup(evEnabled* const me);

/*#[ ignore */
evEnabled * RiC_Create_evEnabled(void);

void RiC_Destroy_evEnabled(evEnabled* const me);
/*#]*/

#endif
/*********************************************************************
	File Path	: DefaultComponent\Simulation\Default.h
*********************************************************************/
