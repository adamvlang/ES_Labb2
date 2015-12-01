/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
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
static void Active_serializeStates(const trainDoor* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void Active_entDef(trainDoor* const me);

/*## statechart_method */
static RiCTakeEventStatus Active_dispatchEvent(trainDoor* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void state_14_serializeStates(const trainDoor* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void state_14_entDef(trainDoor* const me);

/*## statechart_method */
static RiCTakeEventStatus state_14_dispatchEvent(trainDoor* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void warning_serializeStates(const trainDoor* const me, ARCSState * arcsState);

/*## statechart_method */
static void butEnabled_serializeStates(const trainDoor* const me, ARCSState * arcsState);

/*## statechart_method */
static void butDisabled_serializeStates(const trainDoor* const me, ARCSState * arcsState);

/*## statechart_method */
static void state_13_serializeStates(const trainDoor* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

/*## statechart_method */
static void state_13_entDef(trainDoor* const me);

/*## statechart_method */
static RiCTakeEventStatus state_13_dispatchEvent(trainDoor* const me, short id);

#ifdef _OMINSTRUMENT
/*## statechart_method */
static void notAtplatform_serializeStates(const trainDoor* const me, ARCSState * arcsState);

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
    me->stopTime = 0;
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
    me->state_14_subState = trainDoor_RiCNonState;
    me->state_14_active = trainDoor_RiCNonState;
    me->state_13_subState = trainDoor_RiCNonState;
    me->state_13_active = trainDoor_RiCNonState;
    me->atPlatform_subState = trainDoor_RiCNonState;
}

int trainDoor_rootState_IN(const trainDoor* const me) {
    return 1;
}

int trainDoor_Active_IN(const trainDoor* const me) {
    return me->rootState_subState == trainDoor_Active;
}

void trainDoor_Active_exit(trainDoor* const me) {
    switch (me->state_13_subState) {
        /* State atPlatform */
        case trainDoor_atPlatform:
        {
            trainDoor_atPlatform_exit(me);
        }
        break;
        /* State notAtplatform */
        case trainDoor_notAtplatform:
        {
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.notAtplatform");
        }
        break;
        default:
            break;
    }
    me->state_13_subState = trainDoor_RiCNonState;
    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13");
    switch (me->state_14_subState) {
        /* State butDisabled */
        case trainDoor_butDisabled:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
        }
        break;
        /* State butEnabled */
        case trainDoor_butEnabled:
        {
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.butEnabled");
        }
        break;
        /* State warning */
        case trainDoor_warning:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_warning_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.warning");
        }
        break;
        default:
            break;
    }
    me->state_14_subState = trainDoor_RiCNonState;
    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14");
    
    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active");
}

int trainDoor_state_14_IN(const trainDoor* const me) {
    return trainDoor_Active_IN(me);
}

int trainDoor_warning_IN(const trainDoor* const me) {
    return me->state_14_subState == trainDoor_warning;
}

int trainDoor_butEnabled_IN(const trainDoor* const me) {
    return me->state_14_subState == trainDoor_butEnabled;
}

int trainDoor_butDisabled_IN(const trainDoor* const me) {
    return me->state_14_subState == trainDoor_butDisabled;
}

int trainDoor_state_13_IN(const trainDoor* const me) {
    return trainDoor_Active_IN(me);
}

int trainDoor_notAtplatform_IN(const trainDoor* const me) {
    return me->state_13_subState == trainDoor_notAtplatform;
}

int trainDoor_atPlatform_IN(const trainDoor* const me) {
    return me->state_13_subState == trainDoor_atPlatform;
}

void trainDoor_atPlatform_exit(trainDoor* const me) {
    switch (me->atPlatform_subState) {
        /* State open */
        case trainDoor_open:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_open_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.open");
        }
        break;
        /* State closing */
        case trainDoor_closing:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closing");
        }
        break;
        /* State closed */
        case trainDoor_closed:
        {
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closed");
        }
        break;
        /* State opening */
        case trainDoor_opening:
        {
            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_opening_id, &(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.opening");
        }
        break;
        default:
            break;
    }
    me->atPlatform_subState = trainDoor_RiCNonState;
    
    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform");
}

RiCTakeEventStatus trainDoor_atPlatform_takeEvent(trainDoor* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    if(id == rollOut_Default_id)
        {
            /*## transition 6 */
            if(IS_IN(me, trainDoor_closed))
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "6");
                    trainDoor_atPlatform_exit(me);
                    {
                        /*#[ transition 6 */
                        me->stopTime = 3;
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.notAtplatform");
                    me->state_13_subState = trainDoor_notAtplatform;
                    me->state_13_active = trainDoor_notAtplatform;
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "6");
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
    ARCSA_addAttribute_c(arcsAttributes, "stopTime", ARC_int2String(me->stopTime));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const trainDoor * const me = (const trainDoor *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    if(me->rootState_subState == trainDoor_Active)
        {
            Active_serializeStates(me, arcsState);
        }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    trainDoor * const me = (trainDoor *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT");
        NOTIFY_TRANSITION_STARTED(me, trainDoor, "15");
        Active_entDef(me);
        NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "15");
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    trainDoor * const me = (trainDoor *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    /* State Active */
    if(me->rootState_active == trainDoor_Active)
        {
            res = Active_dispatchEvent(me, id);
        }
    return res;
}

#ifdef _OMINSTRUMENT
static void Active_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active");
    state_13_serializeStates(me, arcsState);
    state_14_serializeStates(me, arcsState);
}
#endif /* _OMINSTRUMENT */

static void Active_entDef(trainDoor* const me) {
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active");
    me->rootState_subState = trainDoor_Active;
    me->rootState_active = trainDoor_Active;
    state_13_entDef(me);
    state_14_entDef(me);
}

static RiCTakeEventStatus Active_dispatchEvent(trainDoor* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    /* State state_13 */
    if(state_13_dispatchEvent(me, id) != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(me, trainDoor_Active))
                {
                    return res;
                }
        }
    /* State state_14 */
    if(state_14_dispatchEvent(me, id) != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(me, trainDoor_Active))
                {
                    return res;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
static void state_14_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_14");
    switch (me->state_14_subState) {
        case trainDoor_butDisabled:
        {
            butDisabled_serializeStates(me, arcsState);
        }
        break;
        case trainDoor_butEnabled:
        {
            butEnabled_serializeStates(me, arcsState);
        }
        break;
        case trainDoor_warning:
        {
            warning_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_14_entDef(trainDoor* const me) {
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_14");
    NOTIFY_TRANSITION_STARTED(me, trainDoor, "11");
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
    me->state_14_subState = trainDoor_butDisabled;
    me->state_14_active = trainDoor_butDisabled;
    RiCTask_schedTm(me->ric_reactive.myTask, 1000, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive), "ROOT.Active.state_14.butDisabled");
    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "11");
}

static RiCTakeEventStatus state_14_dispatchEvent(trainDoor* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_14_active) {
        /* State butDisabled */
        case trainDoor_butDisabled:
        {
            switch (id) {
                case evEnable_Default_id:
                {
                    /*## transition 10 */
                    if(IS_IN(me, trainDoor_atPlatform),me->stopTime <= 0)
                        {
                            NOTIFY_TRANSITION_STARTED(me, trainDoor, "10");
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_14.butEnabled");
                            me->state_14_subState = trainDoor_butEnabled;
                            me->state_14_active = trainDoor_butEnabled;
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "10");
                            res = eventConsumed;
                        }
                    else
                        {
                            /*## transition 13 */
                            if(IS_IN(me, trainDoor_notAtplatform))
                                {
                                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "13");
                                    RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
                                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_14.warning");
                                    me->state_14_subState = trainDoor_warning;
                                    me->state_14_active = trainDoor_warning;
                                    RiCTask_schedTm(me->ric_reactive.myTask, 1000, trainDoor_Timeout_warning_id, &(me->ric_reactive), "ROOT.Active.state_14.warning");
                                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "13");
                                    res = eventConsumed;
                                }
                        }
                }
                break;
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == trainDoor_Timeout_butDisabled_id)
                        {
                            /*## transition 8 */
                            if(me->stopTime >= 0)
                                {
                                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "8");
                                    RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
                                    {
                                        /*#[ transition 8 */
                                        --me->stopTime;
                                        /*#]*/
                                    }
                                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
                                    me->state_14_subState = trainDoor_butDisabled;
                                    me->state_14_active = trainDoor_butDisabled;
                                    RiCTask_schedTm(me->ric_reactive.myTask, 1000, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive), "ROOT.Active.state_14.butDisabled");
                                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "8");
                                    res = eventConsumed;
                                }
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        /* State butEnabled */
        case trainDoor_butEnabled:
        {
            /*## transition 16 */
            if(id == evEnable_Default_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "16");
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.butEnabled");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
                    me->state_14_subState = trainDoor_butDisabled;
                    me->state_14_active = trainDoor_butDisabled;
                    RiCTask_schedTm(me->ric_reactive.myTask, 1000, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive), "ROOT.Active.state_14.butDisabled");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "16");
                    res = eventConsumed;
                }
            
        }
        break;
        /* State warning */
        case trainDoor_warning:
        {
            /*## transition 14 */
            if(id == Timeout_id)
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == trainDoor_Timeout_warning_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, trainDoor, "14");
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_warning_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_14.warning");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_14.butDisabled");
                            me->state_14_subState = trainDoor_butDisabled;
                            me->state_14_active = trainDoor_butDisabled;
                            RiCTask_schedTm(me->ric_reactive.myTask, 1000, trainDoor_Timeout_butDisabled_id, &(me->ric_reactive), "ROOT.Active.state_14.butDisabled");
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "14");
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
static void warning_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_14.warning");
}

static void butEnabled_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_14.butEnabled");
}

static void butDisabled_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_14.butDisabled");
}

static void state_13_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_13");
    switch (me->state_13_subState) {
        case trainDoor_atPlatform:
        {
            atPlatform_serializeStates(me, arcsState);
        }
        break;
        case trainDoor_notAtplatform:
        {
            notAtplatform_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void state_13_entDef(trainDoor* const me) {
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13");
    NOTIFY_TRANSITION_STARTED(me, trainDoor, "12");
    atPlatform_entDef(me);
    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "12");
}

static RiCTakeEventStatus state_13_dispatchEvent(trainDoor* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->state_13_active) {
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
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.open");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closing");
                            me->atPlatform_subState = trainDoor_closing;
                            me->state_13_active = trainDoor_closing;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->closeTime, trainDoor_Timeout_closing_id, &(me->ric_reactive), "ROOT.Active.state_13.atPlatform.closing");
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
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closing");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform.opening");
                    me->atPlatform_subState = trainDoor_opening;
                    me->state_13_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.Active.state_13.atPlatform.opening");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "4");
                    res = eventConsumed;
                }
                break;
                /*## transition 5 */
                case entered_Default_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "5");
                    RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closing");
                    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform.opening");
                    me->atPlatform_subState = trainDoor_opening;
                    me->state_13_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.Active.state_13.atPlatform.opening");
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "5");
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
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closing");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closed");
                            me->atPlatform_subState = trainDoor_closed;
                            me->state_13_active = trainDoor_closed;
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
            if(id == evBPress_Default_id)
                {
                    /*## transition 2 */
                    if(IS_IN(me, trainDoor_butEnabled))
                        {
                            NOTIFY_TRANSITION_STARTED(me, trainDoor, "2");
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closed");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform.opening");
                            me->atPlatform_subState = trainDoor_opening;
                            me->state_13_active = trainDoor_opening;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), "ROOT.Active.state_13.atPlatform.opening");
                            NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "2");
                            res = eventConsumed;
                        }
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
                            NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.atPlatform.opening");
                            NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform.open");
                            me->atPlatform_subState = trainDoor_open;
                            me->state_13_active = trainDoor_open;
                            RiCTask_schedTm(me->ric_reactive.myTask, 10000, trainDoor_Timeout_open_id, &(me->ric_reactive), "ROOT.Active.state_13.atPlatform.open");
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
        /* State notAtplatform */
        case trainDoor_notAtplatform:
        {
            /*## transition 7 */
            if(id == evStop_Default_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, trainDoor, "7");
                    NOTIFY_STATE_EXITED(me, trainDoor, "ROOT.Active.state_13.notAtplatform");
                    atPlatform_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "7");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void notAtplatform_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_13.notAtplatform");
}

static void atPlatform_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_13.atPlatform");
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
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform");
    me->state_13_subState = trainDoor_atPlatform;
    NOTIFY_TRANSITION_STARTED(me, trainDoor, "9");
    NOTIFY_STATE_ENTERED(me, trainDoor, "ROOT.Active.state_13.atPlatform.closed");
    me->atPlatform_subState = trainDoor_closed;
    me->state_13_active = trainDoor_closed;
    NOTIFY_TRANSITION_TERMINATED(me, trainDoor, "9");
}

#ifdef _OMINSTRUMENT
static void opening_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_13.atPlatform.opening");
}

static void open_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_13.atPlatform.open");
}

static void closing_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_13.atPlatform.closing");
}

static void closed_serializeStates(const trainDoor* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.state_13.atPlatform.closed");
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
