/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: Test 
	Configuration 	: Sim
	Model Element	: Default
//!	Generated Date	: Thu, 26, Nov 2015  
	File Path	: Test\Sim\Default.c
*********************************************************************/

#include "Default.h"
#include "Dishwasher.h"
#define evStart_SERIALIZE OM_NO_OP

#define evStart_UNSERIALIZE OM_NO_OP

#define evStart_DECLARE_PARAMS OM_NO_OP

#define evStart_CONSTRUCTOR RiC_Create_evStart()

#define evClose_SERIALIZE OM_NO_OP

#define evClose_UNSERIALIZE OM_NO_OP

#define evClose_DECLARE_PARAMS OM_NO_OP

#define evClose_CONSTRUCTOR RiC_Create_evClose()

#define evOpen_SERIALIZE OM_NO_OP

#define evOpen_UNSERIALIZE OM_NO_OP

#define evOpen_DECLARE_PARAMS OM_NO_OP

#define evOpen_CONSTRUCTOR RiC_Create_evOpen()

#define evMode_SERIALIZE OM_NO_OP

#define evMode_UNSERIALIZE OM_NO_OP

#define evMode_DECLARE_PARAMS OM_NO_OP

#define evMode_CONSTRUCTOR RiC_Create_evMode()

#define evService_SERIALIZE OM_NO_OP

#define evService_UNSERIALIZE OM_NO_OP

#define evService_DECLARE_PARAMS OM_NO_OP

#define evService_CONSTRUCTOR RiC_Create_evService()

#define evIntDry_SERIALIZE OM_NO_OP

#define evIntDry_UNSERIALIZE OM_NO_OP

#define evIntDry_DECLARE_PARAMS OM_NO_OP

#define evIntDry_CONSTRUCTOR RiC_Create_evIntDry()

/*## package Default */


#ifdef _OMINSTRUMENT
static const ARCSerGVtbl Default_instrumentVtbl = {
    NULL,
    NULL
};

OM_INSTRUMENT_PACKAGE(Default, Default, &Default_instrumentVtbl)

void Default_OMEvent_Init(void) {
    ARC_INIT_EVENT(evStart);
    ARC_INIT_EVENT(evClose);
    ARC_INIT_EVENT(evOpen);
    ARC_INIT_EVENT(evMode);
    ARC_INIT_EVENT(evService);
    ARC_INIT_EVENT(evIntDry);
}
#endif /* _OMINSTRUMENT */

OM_INSTRUMENT_EVENT(evStart, Default, Default, evStart(), me)

void evStart_Init(evStart* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evStart)
    RiCEvent_init(&(me->ric_event), evStart_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evStart);
}

void evStart_Cleanup(evStart* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

evStart * RiC_Create_evStart(void) {
    evStart* me = (evStart*) malloc(sizeof(evStart));
    if(me!=NULL)
        {
            evStart_Init(me);
        }
    return me;
}

void RiC_Destroy_evStart(evStart* const me) {
    if(me!=NULL)
        {
            evStart_Cleanup(me);
        }
    free(me);
}

OM_INSTRUMENT_EVENT(evClose, Default, Default, evClose(), me)

void evClose_Init(evClose* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evClose)
    RiCEvent_init(&(me->ric_event), evClose_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evClose);
}

void evClose_Cleanup(evClose* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

evClose * RiC_Create_evClose(void) {
    evClose* me = (evClose*) malloc(sizeof(evClose));
    if(me!=NULL)
        {
            evClose_Init(me);
        }
    return me;
}

void RiC_Destroy_evClose(evClose* const me) {
    if(me!=NULL)
        {
            evClose_Cleanup(me);
        }
    free(me);
}

OM_INSTRUMENT_EVENT(evOpen, Default, Default, evOpen(), me)

void evOpen_Init(evOpen* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evOpen)
    RiCEvent_init(&(me->ric_event), evOpen_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evOpen);
}

void evOpen_Cleanup(evOpen* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

evOpen * RiC_Create_evOpen(void) {
    evOpen* me = (evOpen*) malloc(sizeof(evOpen));
    if(me!=NULL)
        {
            evOpen_Init(me);
        }
    return me;
}

void RiC_Destroy_evOpen(evOpen* const me) {
    if(me!=NULL)
        {
            evOpen_Cleanup(me);
        }
    free(me);
}

OM_INSTRUMENT_EVENT(evMode, Default, Default, evMode(), me)

void evMode_Init(evMode* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evMode)
    RiCEvent_init(&(me->ric_event), evMode_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evMode);
}

void evMode_Cleanup(evMode* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

evMode * RiC_Create_evMode(void) {
    evMode* me = (evMode*) malloc(sizeof(evMode));
    if(me!=NULL)
        {
            evMode_Init(me);
        }
    return me;
}

void RiC_Destroy_evMode(evMode* const me) {
    if(me!=NULL)
        {
            evMode_Cleanup(me);
        }
    free(me);
}

OM_INSTRUMENT_EVENT(evService, Default, Default, evService(), me)

void evService_Init(evService* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evService)
    RiCEvent_init(&(me->ric_event), evService_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evService);
}

void evService_Cleanup(evService* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

evService * RiC_Create_evService(void) {
    evService* me = (evService*) malloc(sizeof(evService));
    if(me!=NULL)
        {
            evService_Init(me);
        }
    return me;
}

void RiC_Destroy_evService(evService* const me) {
    if(me!=NULL)
        {
            evService_Cleanup(me);
        }
    free(me);
}

OM_INSTRUMENT_EVENT(evIntDry, Default, Default, evIntDry(), me)

void evIntDry_Init(evIntDry* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evIntDry)
    RiCEvent_init(&(me->ric_event), evIntDry_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evIntDry);
}

void evIntDry_Cleanup(evIntDry* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

evIntDry * RiC_Create_evIntDry(void) {
    evIntDry* me = (evIntDry*) malloc(sizeof(evIntDry));
    if(me!=NULL)
        {
            evIntDry_Init(me);
        }
    return me;
}

void RiC_Destroy_evIntDry(evIntDry* const me) {
    if(me!=NULL)
        {
            evIntDry_Cleanup(me);
        }
    free(me);
}

/*********************************************************************
	File Path	: Test\Sim\Default.c
*********************************************************************/
