/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: Simulation
	Model Element	: Default
//!	Generated Date	: Tue, 1, Dec 2015  
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

/*********************************************************************
	File Path	: DefaultComponent\Simulation\Default.c
*********************************************************************/
