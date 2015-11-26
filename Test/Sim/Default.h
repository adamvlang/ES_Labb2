/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: Test 
	Configuration 	: Sim
	Model Element	: Default
//!	Generated Date	: Thu, 26, Nov 2015  
	File Path	: Test\Sim\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

#include <oxf\Ric.h>
#include <oxf\RiCEvent.h>
#define evStart_Default_id 18601

#define evClose_Default_id 18602

#define evOpen_Default_id 18603

#define evMode_Default_id 18604

#define evService_Default_id 18605

#define evIntDry_Default_id 18606

struct Dishwasher;

/*## package Default */


#define MAX_CYCLES 3
#ifdef _OMINSTRUMENT
void Default_OMEvent_Init(void);
#endif /* _OMINSTRUMENT */

typedef struct evStart evStart;
struct evStart {
    RiCEvent ric_event;
};

void evStart_Init(evStart* const me);

void evStart_Cleanup(evStart* const me);

evStart * RiC_Create_evStart(void);

void RiC_Destroy_evStart(evStart* const me);

typedef struct evClose evClose;
struct evClose {
    RiCEvent ric_event;
};

void evClose_Init(evClose* const me);

void evClose_Cleanup(evClose* const me);

evClose * RiC_Create_evClose(void);

void RiC_Destroy_evClose(evClose* const me);

typedef struct evOpen evOpen;
struct evOpen {
    RiCEvent ric_event;
};

void evOpen_Init(evOpen* const me);

void evOpen_Cleanup(evOpen* const me);

evOpen * RiC_Create_evOpen(void);

void RiC_Destroy_evOpen(evOpen* const me);

typedef struct evMode evMode;
struct evMode {
    RiCEvent ric_event;
};

void evMode_Init(evMode* const me);

void evMode_Cleanup(evMode* const me);

evMode * RiC_Create_evMode(void);

void RiC_Destroy_evMode(evMode* const me);

typedef struct evService evService;
struct evService {
    RiCEvent ric_event;
};

void evService_Init(evService* const me);

void evService_Cleanup(evService* const me);

evService * RiC_Create_evService(void);

void RiC_Destroy_evService(evService* const me);

typedef struct evIntDry evIntDry;
struct evIntDry {
    RiCEvent ric_event;
};

void evIntDry_Init(evIntDry* const me);

void evIntDry_Cleanup(evIntDry* const me);

evIntDry * RiC_Create_evIntDry(void);

void RiC_Destroy_evIntDry(evIntDry* const me);

#endif
/*********************************************************************
	File Path	: Test\Sim\Default.h
*********************************************************************/
