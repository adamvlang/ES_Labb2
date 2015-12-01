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
static void notAtPlatform_serializeStates(const trainDoor* const me, ARCSState * arcsState);

/*## statechart_method */
static void atPlatform_serializeStates(const trainDoor* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void atPlatform_entDef(trainDoor* const me);

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
    me->atPlatform_subState = trainDoor_RiCNonState;
}

int trainDoor_rootState_IN(const trainDoor* const me) {
    return 1;
}

int trainDoor_notAtPlatform_IN(const trainDoor* const me) {
    return me->rootState_subState == trainDoor_notAtPlatform;
}

int trainDoor_atPlatform_IN(const trainDoor* const me) {
    return me->rootState_subState == trainDoor_atPlatform;
}

void trainDoor_atPlatform_exit(trainDoor* const me) {
    switch (me->atPlatform_subState) {
        /* State open */
        case trainDoor_open:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_open_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.open");
        }
        break;
        /* State closing */
        case trainDoor_closing:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.closing");
        }
        break;
        /* State closed */
        case trainDoor_closed:
        {
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.closed");
        }
        break;
        /* State opening */
        case trainDoor_opening:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_opening_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.opening");
        }
        break;
        default:
            break;
    }
    me->atPlatform_subState = trainDoor_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform");
}

RiCTakeEventStatus trainDoor_atPlatform_takeEvent(trainDoor* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == rollOut_Default_id)
        {
            /*## transition 8 */
            if(IS_IN(me, trainDoor_closed))
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "8");
                    trainDoor_atPlatform_exit(me);
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.notAtPlatform");
                    me->rootState_subState = trainDoor_notAtPlatform;
                    me->rootState_active = trainDoor_notAtPlatform;
                    RiCTask_schedTm(me->ric_reactive.myTask, 3000, trainDoor_Timeout_notAtPlatform_id, &(me->ric_reactive), "ROOT.notAtPlatform");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "8");
                    res = eventConsumed;
                }
        }
    return res;
}

int trainDoor_opening_IN(const trainDoor* const me) {
    return me->atPlatform_subState == trainDoor_opening;
}

int trainDoor_open_IN(const trainDoor* const me) {
    return me->atPlatform_subState == trainDoor_open;
}

int trainDoor_closing_IN(const trainDoor* const me) {
    return me->atPlatform_subState == trainDoor_closing;
}

int trainDoor_closed_IN(const trainDoor* const me) {
    return me->atPlatform_subState == trainDoor_closed;
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
        case trainDoor_atPlatform:
        {
            atPlatform_serializeStates(me, arcsState);
        }
        break;
        case trainDoor_notAtPlatform:
        {
            notAtPlatform_serializeStates(me, arcsState);
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
        NOTIFY_TRANSITION_STARTED(me, trainDoor, "9");
        atPlatform_entDef(me);
        NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "9");
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
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.open");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform.closing");
                            me->atPlatform_subState = trainDoor_closing;
                            me->rootState_active = trainDoor_closing;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->closeTime, trainDoor_Timeout_closing_id, &(me->ric_reactive), "ROOT.atPlatform.closing");
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "0");
                            res = eventConsumed;
                        }
                }
            if(res == eventNotConsumed)
                {
                    res = trainDoor_atPlatform_takeEvent(me, id);
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
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.closing");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform.opening");
                    me->atPlatform_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.atPlatform.opening");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "4");
                    res = eventConsumed;
                }
                break;
                /*## transition 6 */
                case entered_Default_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "6");
                    RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.closing");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform.opening");
                    me->atPlatform_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.atPlatform.opening");
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
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.closing");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform.closed");
                            me->atPlatform_subState = trainDoor_closed;
                            me->rootState_active = trainDoor_closed;
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "1");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            if(res == eventNotConsumed)
                {
                    res = trainDoor_atPlatform_takeEvent(me, id);
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
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.closed");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform.opening");
                    me->atPlatform_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.atPlatform.opening");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "2");
                    res = eventConsumed;
                }
            if(res == eventNotConsumed)
                {
                    res = trainDoor_atPlatform_takeEvent(me, id);
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
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.atPlatform.opening");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform.open");
                            me->atPlatform_subState = trainDoor_open;
                            me->rootState_active = trainDoor_open;
                            RiCTask_schedTm(me->ric_reactive.myTask, 10000, trainDoor_Timeout_open_id, &(me->ric_reactive), "ROOT.atPlatform.open");
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "3");
                            res = eventConsumed;
                        }
                }
            if(res == eventNotConsumed)
                {
                    res = trainDoor_atPlatform_takeEvent(me, id);
                }
        }
        break;
        /* State notAtPlatform */
        case trainDoor_notAtPlatform:
        {
            /*## transition 7 */
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == trainDoor_Timeout_notAtPlatform_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, trainDoor, "7");
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_notAtPlatform_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.notAtPlatform");
                            atPlatform_entDef(me);
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "7");
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
static void notAtPlatform_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.notAtPlatform");
}

static void atPlatform_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.atPlatform");
    switch (me->atPlatform_subState) {
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

static void atPlatform_entDef(trainDoor* const me) {
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform");
    me->rootState_subState = trainDoor_atPlatform;
    NOTIFY_TRANSITION_STARTED(me, trainDoor, "5");
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.atPlatform.closed");
    me->atPlatform_subState = trainDoor_closed;
    me->rootState_active = trainDoor_closed;
    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "5");
}

#ifdef _OMINSTRUMENT
static void opening_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.atPlatform.opening");
}

static void open_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.atPlatform.open");
}

static void closing_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.atPlatform.closing");
}

static void closed_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.atPlatform.closed");
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
