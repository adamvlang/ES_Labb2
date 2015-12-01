/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: Simulation
	Model Element	: trainDoor
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\Simulation\trainDoor.c
*********************************************************************/

/*## auto_generated */
#include "trainDoor.h"
/*#[ ignore */
#define Default_trainDoor_Init_SERIALIZE OM_NO_OP
/*#]*/

/*## package Default */

/*## class trainDoor */
/*## auto_generated */
static void initStatechart(trainDoor* const me);

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes);

/*## statechart_method */
static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void rootState_entDef(void * const void_me);

/*## statechart_method */
static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void opening_serializeStates(const trainDoor* const me, ARCSState * arcsState);

/*## statechart_method */
static void open_serializeStates(const trainDoor* const me, ARCSState * arcsState);

/*## statechart_method */
static void closing_serializeStates(const trainDoor* const me, ARCSState * arcsState);

/*## statechart_method */
static void closed_serializeStates(const trainDoor* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(trainDoor* const me);

static const ARCSerCVtbl Default_trainDoor_instrumentVtbl = {
    serializeAttributes,
    NULL
};
/*#]*/

#ifdef _OMINSTRUMENT
OM_INSTRUMENT_OBJECT_TYPE(trainDoor, Default, Default, FALSE, &Default_trainDoor_instrumentVtbl)
#endif /* _OMINSTRUMENT */

/*## operation Init() */
void trainDoor_Init(trainDoor* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl trainDoor_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) trainDoor_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) trainDoor_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->closeTime = 5000;
    me->openTime = 5000;
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &trainDoor_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, trainDoor, trainDoor_Init, trainDoor_Init(), 0, Default_trainDoor_Init_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initStatechart(me);
    /*#[ operation Init() */
    /*#]*/
    NOTIFY_END_CONSTRUCTOR(me);
}

void trainDoor_Cleanup(trainDoor* const me) {
    NOTIFY_DESTRUCTOR(me, &me, trainDoor, ~trainDoor);
    RiCReactive_cleanup(&(me->ric_reactive));
}

void trainDoor_setOpenTime(trainDoor* const me, int p_openTime) {
    me->openTime = p_openTime;
    NOTIFY_SET_OPERATION(me, trainDoor);
}

trainDoor * trainDoor_Create(RiCTask * p_task) {
    trainDoor* me = (trainDoor *) malloc(sizeof(trainDoor));
    if(me!=NULL)
        {
            trainDoor_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void trainDoor_Destroy(trainDoor* const me) {
    if(me!=NULL)
        {
            trainDoor_Cleanup(me);
        }
    free(me);
}

RiCBoolean trainDoor_startBehavior(trainDoor* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static void initStatechart(trainDoor* const me) {
    me->rootState_subState = trainDoor_RiCNonState;
    me->rootState_active = trainDoor_RiCNonState;
}

int trainDoor_rootState_IN(const trainDoor* const me) {
    return 1;
}

int trainDoor_opening_IN(const trainDoor* const me) {
    return me->rootState_subState == trainDoor_opening;
}

int trainDoor_open_IN(const trainDoor* const me) {
    return me->rootState_subState == trainDoor_open;
}

int trainDoor_closing_IN(const trainDoor* const me) {
    return me->rootState_subState == trainDoor_closing;
}

int trainDoor_closed_IN(const trainDoor* const me) {
    return me->rootState_subState == trainDoor_closed;
}

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const trainDoor * const me = (const trainDoor *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "openTime", ARC_int2String(me->openTime));
    ARCSA_addAttribute_c(arcsAttributes, "closeTime", ARC_int2String(me->closeTime));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const trainDoor * const me = (const trainDoor *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    switch (me->rootState_subState) {
        case trainDoor_open:
        {
            open_serializeStates(me, arcsState);
        }
        break;
        case trainDoor_closing:
        {
            closing_serializeStates(me, arcsState);
        }
        break;
        case trainDoor_closed:
        {
            closed_serializeStates(me, arcsState);
        }
        break;
        case trainDoor_opening:
        {
            opening_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    trainDoor * const me = (trainDoor *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, trainDoor, "5");
        NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.closed");
        me->rootState_subState = trainDoor_closed;
        me->rootState_active = trainDoor_closed;
        NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "5");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    trainDoor * const me = (trainDoor *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->rootState_active) {
        /* State open */
        case trainDoor_open:
        {
            /*## transition 0 */
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == trainDoor_Timeout_open_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, trainDoor, "0");
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_open_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.open");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.closing");
                            me->rootState_subState = trainDoor_closing;
                            me->rootState_active = trainDoor_closing;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->closeTime, trainDoor_Timeout_closing_id, &(me->ric_reactive), "ROOT.closing");
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "0");
                            res = eventConsumed;
                        }
                }
        }
        break;
        /* State closing */
        case trainDoor_closing:
        {
            switch (id) {
                /*## transition 4 */
                case evBPress_Default_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "4");
                    RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.closing");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.opening");
                    me->rootState_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.opening");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "4");
                    res = eventConsumed;
                }
                break;
                /*## transition 6 */
                case entered_Default_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "6");
                    RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.closing");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.opening");
                    me->rootState_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.opening");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "6");
                    res = eventConsumed;
                }
                break;
                /*## transition 1 */
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == trainDoor_Timeout_closing_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, trainDoor, "1");
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.closing");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.closed");
                            me->rootState_subState = trainDoor_closed;
                            me->rootState_active = trainDoor_closed;
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "1");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
        }
        break;
        /* State closed */
        case trainDoor_closed:
        {
            /*## transition 2 */
            if(id == evBPress_Default_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "2");
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.closed");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.opening");
                    me->rootState_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.opening");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "2");
                    res = eventConsumed;
                }
        }
        break;
        /* State opening */
        case trainDoor_opening:
        {
            /*## transition 3 */
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == trainDoor_Timeout_opening_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, trainDoor, "3");
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_opening_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.opening");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.open");
                            me->rootState_subState = trainDoor_open;
                            me->rootState_active = trainDoor_open;
                            RiCTask_schedTm(me->ric_reactive.myTask, 10000, trainDoor_Timeout_open_id, &(me->ric_reactive), "ROOT.open");
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "3");
                            res = eventConsumed;
                        }
                }
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void opening_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.opening");
}

static void open_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.open");
}

static void closing_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.closing");
}

static void closed_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.closed");
}
#endif /* _OMINSTRUMENT */

/*#[ ignore */
static void FreeInstance(trainDoor* const me) {
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: DefaultComponent\Simulation\trainDoor.c
*********************************************************************/
