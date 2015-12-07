/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: Simulation
	Model Element	: Default
//!	Generated Date	: Mon, 7, Dec 2015  
	File Path	: DefaultComponent\Simulation\Default.c
*********************************************************************/

/*## auto_generated */
#include "Default.h"
/*## auto_generated */
#include "trainDoor.h"
/*#[ ignore */
#define evBPress_SERIALIZE OM_NO_OP

#define evBPress_UNSERIALIZE OM_NO_OP

#define evBPress_DECLARE_PARAMS OM_NO_OP

#define evBPress_CONSTRUCTOR RiC_Create_evBPress()

#define entered_SERIALIZE OM_NO_OP

#define entered_UNSERIALIZE OM_NO_OP

#define entered_DECLARE_PARAMS OM_NO_OP

#define entered_CONSTRUCTOR RiC_Create_entered()

#define rollOut_SERIALIZE OM_NO_OP

#define rollOut_UNSERIALIZE OM_NO_OP

#define rollOut_DECLARE_PARAMS OM_NO_OP

#define rollOut_CONSTRUCTOR RiC_Create_rollOut()

#define evEnable_SERIALIZE OM_NO_OP

#define evEnable_UNSERIALIZE OM_NO_OP

#define evEnable_DECLARE_PARAMS OM_NO_OP

#define evEnable_CONSTRUCTOR RiC_Create_evEnable()

#define evStop_SERIALIZE OM_NO_OP

#define evStop_UNSERIALIZE OM_NO_OP

#define evStop_DECLARE_PARAMS OM_NO_OP

#define evStop_CONSTRUCTOR RiC_Create_evStop()

#define svStop_SERIALIZE OM_NO_OP

#define svStop_UNSERIALIZE OM_NO_OP

#define svStop_DECLARE_PARAMS OM_NO_OP

#define svStop_CONSTRUCTOR RiC_Create_svStop()

#define evEnabled_SERIALIZE OM_NO_OP

#define evEnabled_UNSERIALIZE OM_NO_OP

#define evEnabled_DECLARE_PARAMS OM_NO_OP

#define evEnabled_CONSTRUCTOR RiC_Create_evEnabled()
/*#]*/

/*## package Default */


#ifdef _OMINSTRUMENT
/*#[ ignore */
static const ARCSerGVtbl Default_instrumentVtbl = {
    NULL,
    NULL
};
/*#]*/

OM_INSTRUMENT_PACKAGE(Default, Default, &Default_instrumentVtbl)

void Default_OMEvent_Init(void) {
    ARC_INIT_EVENT(evBPress);
    ARC_INIT_EVENT(entered);
    ARC_INIT_EVENT(rollOut);
    ARC_INIT_EVENT(evEnable);
    ARC_INIT_EVENT(evStop);
    ARC_INIT_EVENT(svStop);
    ARC_INIT_EVENT(evEnabled);
}
#endif /* _OMINSTRUMENT */

OM_INSTRUMENT_EVENT(evBPress, Default, Default, evBPress(), me)

void evBPress_Init(evBPress* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evBPress)
    RiCEvent_init(&(me->ric_event), evBPress_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evBPress);
}

void evBPress_Cleanup(evBPress* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evBPress * RiC_Create_evBPress(void) {
    evBPress* me = (evBPress*) malloc(sizeof(evBPress));
    if(me!=NULL)
        {
            evBPress_Init(me);
        }
    return me;
}

void RiC_Destroy_evBPress(evBPress* const me) {
    if(me!=NULL)
        {
            evBPress_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(entered, Default, Default, entered(), me)

void entered_Init(entered* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, entered)
    RiCEvent_init(&(me->ric_event), entered_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, entered);
}

void entered_Cleanup(entered* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
entered * RiC_Create_entered(void) {
    entered* me = (entered*) malloc(sizeof(entered));
    if(me!=NULL)
        {
            entered_Init(me);
        }
    return me;
}

void RiC_Destroy_entered(entered* const me) {
    if(me!=NULL)
        {
            entered_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(rollOut, Default, Default, rollOut(), me)

void rollOut_Init(rollOut* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, rollOut)
    RiCEvent_init(&(me->ric_event), rollOut_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, rollOut);
}

void rollOut_Cleanup(rollOut* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
rollOut * RiC_Create_rollOut(void) {
    rollOut* me = (rollOut*) malloc(sizeof(rollOut));
    if(me!=NULL)
        {
            rollOut_Init(me);
        }
    return me;
}

void RiC_Destroy_rollOut(rollOut* const me) {
    if(me!=NULL)
        {
            rollOut_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evEnable, Default, Default, evEnable(), me)

void evEnable_Init(evEnable* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evEnable)
    RiCEvent_init(&(me->ric_event), evEnable_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evEnable);
}

void evEnable_Cleanup(evEnable* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evEnable * RiC_Create_evEnable(void) {
    evEnable* me = (evEnable*) malloc(sizeof(evEnable));
    if(me!=NULL)
        {
            evEnable_Init(me);
        }
    return me;
}

void RiC_Destroy_evEnable(evEnable* const me) {
    if(me!=NULL)
        {
            evEnable_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evStop, Default, Default, evStop(), me)

void evStop_Init(evStop* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evStop)
    RiCEvent_init(&(me->ric_event), evStop_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evStop);
}

void evStop_Cleanup(evStop* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evStop * RiC_Create_evStop(void) {
    evStop* me = (evStop*) malloc(sizeof(evStop));
    if(me!=NULL)
        {
            evStop_Init(me);
        }
    return me;
}

void RiC_Destroy_evStop(evStop* const me) {
    if(me!=NULL)
        {
            evStop_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(svStop, Default, Default, svStop(), me)

void svStop_Init(svStop* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, svStop)
    RiCEvent_init(&(me->ric_event), svStop_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, svStop);
}

void svStop_Cleanup(svStop* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
svStop * RiC_Create_svStop(void) {
    svStop* me = (svStop*) malloc(sizeof(svStop));
    if(me!=NULL)
        {
            svStop_Init(me);
        }
    return me;
}

void RiC_Destroy_svStop(svStop* const me) {
    if(me!=NULL)
        {
            svStop_Cleanup(me);
        }
    free(me);
}
/*#]*/

OM_INSTRUMENT_EVENT(evEnabled, Default, Default, evEnabled(), me)

void evEnabled_Init(evEnabled* const me) {
    OM_INSTRUMENT_EVENT_INSTANCE(me, evEnabled)
    RiCEvent_init(&(me->ric_event), evEnabled_Default_id, NULL);
    RIC_SET_EVENT_DESTROY_OP(me, evEnabled);
}

void evEnabled_Cleanup(evEnabled* const me) {
    RiCEvent_cleanup(&(me->ric_event));
}

/*#[ ignore */
evEnabled * RiC_Create_evEnabled(void) {
    evEnabled* me = (evEnabled*) malloc(sizeof(evEnabled));
    if(me!=NULL)
        {
            evEnabled_Init(me);
        }
    return me;
}

void RiC_Destroy_evEnabled(evEnabled* const me) {
    if(me!=NULL)
        {
            evEnabled_Cleanup(me);
        }
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: DefaultComponent\Simulation\Default.c
*********************************************************************/
