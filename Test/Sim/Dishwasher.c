/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: Test 
	Configuration 	: Sim
	Model Element	: Dishwasher
//!	Generated Date	: Thu, 26, Nov 2015  
	File Path	: Test\Sim\Dishwasher.c
*********************************************************************/

#include "Dishwasher.h"
#define Default_Dishwasher_Init_SERIALIZE OM_NO_OP

#define Default_Dishwasher_isDried_SERIALIZE OM_NO_OP

#define Default_Dishwasher_isInNeedOfService_SERIALIZE OM_NO_OP

#define Default_Dishwasher_isRinsed_SERIALIZE OM_NO_OP

#define Default_Dishwasher_isWashed_SERIALIZE OM_NO_OP

#define Default_Dishwasher_setup_SERIALIZE OM_NO_OP

/*## package Default */

/*## class Dishwasher */
/*## operation isDried() */
static RiCBoolean isDried(Dishwasher* const me);

/*## operation isInNeedOfService() */
static RiCBoolean isInNeedOfService(Dishwasher* const me);

/*## operation isRinsed() */
static RiCBoolean isRinsed(Dishwasher* const me);

/*## operation isWashed() */
static RiCBoolean isWashed(Dishwasher* const me);

/*## operation setup() */
static void setup(Dishwasher* const me);

static void initStatechart(Dishwasher* const me);

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes);

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me);

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id);

#ifdef _OMINSTRUMENT
static void Active_serializeStates(const Dishwasher* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

static void Active_entDef(Dishwasher* const me);

static RiCTakeEventStatus Active_dispatchEvent(Dishwasher* const me, short id);

#ifdef _OMINSTRUMENT
static void service_serializeStates(const Dishwasher* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

static void service_entDef(Dishwasher* const me);

static RiCTakeEventStatus service_dispatchEvent(Dishwasher* const me, short id);

#ifdef _OMINSTRUMENT
static void normal_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void faulty_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void running_serializeStates(const Dishwasher* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

static void running_entDef(Dishwasher* const me);

static RiCTakeEventStatus running_dispatchEvent(Dishwasher* const me, short id);

#ifdef _OMINSTRUMENT
static void open_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void on_serializeStates(const Dishwasher* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

static void on_entDef(Dishwasher* const me);

#ifdef _OMINSTRUMENT
static void washing_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void rinsing_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void drying_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void off_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void mode_serializeStates(const Dishwasher* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

static void mode_entDef(Dishwasher* const me);

static RiCTakeEventStatus mode_dispatchEvent(Dishwasher* const me, short id);

#ifdef _OMINSTRUMENT
static void quick_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void intensive_serializeStates(const Dishwasher* const me, ARCSState * arcsState);

static void energySaver_serializeStates(const Dishwasher* const me, ARCSState * arcsState);
#endif /* _OMINSTRUMENT */

static void FreeInstance(Dishwasher* const me);

#ifdef _OMINSTRUMENT
static const ARCSerCVtbl Default_Dishwasher_instrumentVtbl = {
    serializeAttributes,
    NULL
};

OM_INSTRUMENT_OBJECT_TYPE(Dishwasher, Default, Default, FALSE, &Default_Dishwasher_instrumentVtbl)
#endif /* _OMINSTRUMENT */

/*## operation Init() */
void Dishwasher_Init(Dishwasher* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl Dishwasher_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        ROOT_STATE_SERIALIZE_STATES(rootState_serializeStates),
        (RiCObjectDestroyMethod) Dishwasher_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) Dishwasher_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->cycles = 0;
    me->dryTime = 0;
    me->rinseTime = 0;
    me->washTime = 0;
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &Dishwasher_reactiveVtbl);
    NOTIFY_REACTIVE_CONSTRUCTOR(me, &me, NULL, Dishwasher, Dishwasher_Init, Dishwasher_Init(), 0, Default_Dishwasher_Init_SERIALIZE);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initStatechart(me);
    /*#[ operation Init() */
    /*#]*/
    NOTIFY_END_CONSTRUCTOR(me);
}

void Dishwasher_Cleanup(Dishwasher* const me) {
    NOTIFY_DESTRUCTOR(me, &me, Dishwasher, ~Dishwasher);
    {
        RiCReactive_cleanup(&(me->ric_reactive));
    }
}

/*## operation isDried() */
static RiCBoolean isDried(Dishwasher* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Dishwasher, isDried, isDried(), 0, Default_Dishwasher_isDried_SERIALIZE);
    {
        /*#[ operation isDried() */
        return (0 == me->dryTime);
        /*#]*/
    }
}

/*## operation isInNeedOfService() */
static RiCBoolean isInNeedOfService(Dishwasher* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Dishwasher, isInNeedOfService, isInNeedOfService(), 0, Default_Dishwasher_isInNeedOfService_SERIALIZE);
    {
        /*#[ operation isInNeedOfService() */
        return (me->cycles > MAX_CYCLES);
        /*#]*/
    }
}

/*## operation isRinsed() */
static RiCBoolean isRinsed(Dishwasher* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Dishwasher, isRinsed, isRinsed(), 0, Default_Dishwasher_isRinsed_SERIALIZE);
    {
        /*#[ operation isRinsed() */
        return (0 == me->rinseTime);
        /*#]*/
    }
}

/*## operation isWashed() */
static RiCBoolean isWashed(Dishwasher* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Dishwasher, isWashed, isWashed(), 0, Default_Dishwasher_isWashed_SERIALIZE);
    {
        /*#[ operation isWashed() */
        return (0 == me->washTime);
        /*#]*/
    }
}

/*## operation setup() */
static void setup(Dishwasher* const me) {
    NOTIFY_OPERATION(me, &me, NULL, Dishwasher, setup, setup(), 0, Default_Dishwasher_setup_SERIALIZE);
    {
        /*#[ operation setup() */
        if (IS_IN(me, Dishwasher_quick)){
        	me->rinseTime = 1;
        	me->washTime = 1;
        	me->dryTime = 1;
        } else if IS_IN(me, Dishwasher_energySaver){        
        	me->rinseTime = 2;
        	me->washTime = 2;
        	me->dryTime = 1;  }
        else {        
        	me->rinseTime = 4;
        	me->washTime = 5;
        	me->dryTime = 3;  }
        /*#]*/
    }
}

void Dishwasher_setCycles(Dishwasher* const me, int p_cycles) {
    me->cycles = p_cycles;
    NOTIFY_SET_OPERATION(me, Dishwasher);
}

void Dishwasher_setDryTime(Dishwasher* const me, int p_dryTime) {
    me->dryTime = p_dryTime;
    NOTIFY_SET_OPERATION(me, Dishwasher);
}

void Dishwasher_setRinseTime(Dishwasher* const me, int p_rinseTime) {
    me->rinseTime = p_rinseTime;
    NOTIFY_SET_OPERATION(me, Dishwasher);
}

void Dishwasher_setWashTime(Dishwasher* const me, int p_washTime) {
    me->washTime = p_washTime;
    NOTIFY_SET_OPERATION(me, Dishwasher);
}

Dishwasher * Dishwasher_Create(RiCTask * p_task) {
    Dishwasher* me = (Dishwasher *) malloc(sizeof(Dishwasher));
    if(me!=NULL)
        {
            Dishwasher_Init(me, p_task);
        }
    DYNAMICALLY_ALLOCATED(me);
    return me;
}

void Dishwasher_Destroy(Dishwasher* const me) {
    if(me!=NULL)
        {
            Dishwasher_Cleanup(me);
        }
    free(me);
}

RiCBoolean Dishwasher_startBehavior(Dishwasher* const me) {
    RiCBoolean done = RiCFALSE;
    done = RiCReactive_startBehavior(&(me->ric_reactive));
    return done;
}

static void initStatechart(Dishwasher* const me) {
    me->rootState_subState = Dishwasher_RiCNonState;
    me->rootState_active = Dishwasher_RiCNonState;
    me->service_subState = Dishwasher_RiCNonState;
    me->service_active = Dishwasher_RiCNonState;
    me->running_subState = Dishwasher_RiCNonState;
    me->running_active = Dishwasher_RiCNonState;
    me->on_subState = Dishwasher_RiCNonState;
    me->mode_subState = Dishwasher_RiCNonState;
    me->mode_active = Dishwasher_RiCNonState;
}

int Dishwasher_rootState_IN(const Dishwasher* const me) {
    return 1;
}

int Dishwasher_Active_IN(const Dishwasher* const me) {
    return me->rootState_subState == Dishwasher_Active;
}

void Dishwasher_Active_exit(Dishwasher* const me) {
    switch (me->running_subState) {
        /* State off */
        case Dishwasher_off:
        {
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.off");
        }
        break;
        /* State open */
        case Dishwasher_open:
        {
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.open");
        }
        break;
        /* State on */
        case Dishwasher_on:
        {
            switch (me->on_subState) {
                /* State washing */
                case Dishwasher_washing:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_washing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.washing");
                }
                break;
                /* State rinsing */
                case Dishwasher_rinsing:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                }
                break;
                /* State drying */
                case Dishwasher_drying:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_drying_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.drying");
                }
                break;
                default:
                    break;
            }
            me->on_subState = Dishwasher_RiCNonState;
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on");
        }
        break;
        default:
            break;
    }
    me->running_subState = Dishwasher_RiCNonState;
    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running");
    switch (me->service_subState) {
        /* State normal */
        case Dishwasher_normal:
        {
            RiCReactive_popNullConfig(&(me->ric_reactive));
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.service.normal");
        }
        break;
        /* State faulty */
        case Dishwasher_faulty:
        {
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.service.faulty");
        }
        break;
        default:
            break;
    }
    me->service_subState = Dishwasher_RiCNonState;
    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.service");
    switch (me->mode_subState) {
        /* State quick */
        case Dishwasher_quick:
        {
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.mode.quick");
        }
        break;
        /* State intensive */
        case Dishwasher_intensive:
        {
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.mode.intensive");
        }
        break;
        /* State energySaver */
        case Dishwasher_energySaver:
        {
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.mode.energySaver");
        }
        break;
        default:
            break;
    }
    me->mode_subState = Dishwasher_RiCNonState;
    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.mode");
    
    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active");
}

int Dishwasher_service_IN(const Dishwasher* const me) {
    return Dishwasher_Active_IN(me);
}

int Dishwasher_normal_IN(const Dishwasher* const me) {
    return me->service_subState == Dishwasher_normal;
}

int Dishwasher_faulty_IN(const Dishwasher* const me) {
    return me->service_subState == Dishwasher_faulty;
}

int Dishwasher_running_IN(const Dishwasher* const me) {
    return Dishwasher_Active_IN(me);
}

int Dishwasher_open_IN(const Dishwasher* const me) {
    return me->running_subState == Dishwasher_open;
}

int Dishwasher_on_IN(const Dishwasher* const me) {
    return me->running_subState == Dishwasher_on;
}

RiCTakeEventStatus Dishwasher_on_takeEvent(Dishwasher* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    /*## transition 12 */
    if(id == evOpen_Default_id)
        {
            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "12");
            switch (me->on_subState) {
                /* State washing */
                case Dishwasher_washing:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_washing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.washing");
                }
                break;
                /* State rinsing */
                case Dishwasher_rinsing:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                }
                break;
                /* State drying */
                case Dishwasher_drying:
                {
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_drying_id, &(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.drying");
                }
                break;
                default:
                    break;
            }
            me->on_subState = Dishwasher_RiCNonState;
            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on");
            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.open");
            me->running_subState = Dishwasher_open;
            me->running_active = Dishwasher_open;
            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "12");
            res = eventConsumed;
        }
    
    return res;
}

int Dishwasher_washing_IN(const Dishwasher* const me) {
    return me->on_subState == Dishwasher_washing;
}

int Dishwasher_rinsing_IN(const Dishwasher* const me) {
    return me->on_subState == Dishwasher_rinsing;
}

int Dishwasher_drying_IN(const Dishwasher* const me) {
    return me->on_subState == Dishwasher_drying;
}

int Dishwasher_off_IN(const Dishwasher* const me) {
    return me->running_subState == Dishwasher_off;
}

int Dishwasher_mode_IN(const Dishwasher* const me) {
    return Dishwasher_Active_IN(me);
}

int Dishwasher_quick_IN(const Dishwasher* const me) {
    return me->mode_subState == Dishwasher_quick;
}

int Dishwasher_intensive_IN(const Dishwasher* const me) {
    return me->mode_subState == Dishwasher_intensive;
}

int Dishwasher_energySaver_IN(const Dishwasher* const me) {
    return me->mode_subState == Dishwasher_energySaver;
}

#ifdef _OMINSTRUMENT
static void serializeAttributes(const void * const void_me, ARCSAttributes * arcsAttributes) {
    
    const Dishwasher * const me = (const Dishwasher *)void_me;
    ARCSA_addAttribute_c(arcsAttributes, "rinseTime", ARC_int2String(me->rinseTime));
    ARCSA_addAttribute_c(arcsAttributes, "washTime", ARC_int2String(me->washTime));
    ARCSA_addAttribute_c(arcsAttributes, "dryTime", ARC_int2String(me->dryTime));
    ARCSA_addAttribute_c(arcsAttributes, "cycles", ARC_int2String(me->cycles));
}

static void rootState_serializeStates(const void * const void_me, ARCSState * arcsState) {
    
    const Dishwasher * const me = (const Dishwasher *)void_me;
    ARCSS_addState_OMH(arcsState, "ROOT");
    if(me->rootState_subState == Dishwasher_Active)
        {
            Active_serializeStates(me, arcsState);
        }
}
#endif /* _OMINSTRUMENT */

static void rootState_entDef(void * const void_me) {
    
    Dishwasher * const me = (Dishwasher *)void_me;
    {
        NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT");
        Active_entDef(me);
    }
}

static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id) {
    
    Dishwasher * const me = (Dishwasher *)void_me;
    RiCTakeEventStatus res = eventNotConsumed;
    /* State Active */
    if(me->rootState_active == Dishwasher_Active)
        {
            res = Active_dispatchEvent(me, id);
        }
    return res;
}

#ifdef _OMINSTRUMENT
static void Active_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active");
    running_serializeStates(me, arcsState);
    service_serializeStates(me, arcsState);
    mode_serializeStates(me, arcsState);
}
#endif /* _OMINSTRUMENT */

static void Active_entDef(Dishwasher* const me) {
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active");
    me->rootState_subState = Dishwasher_Active;
    me->rootState_active = Dishwasher_Active;
    running_entDef(me);
    service_entDef(me);
    mode_entDef(me);
}

static RiCTakeEventStatus Active_dispatchEvent(Dishwasher* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    /* State running */
    if(running_dispatchEvent(me, id) != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(me, Dishwasher_Active))
                {
                    return res;
                }
        }
    /* State service */
    if(service_dispatchEvent(me, id) != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(me, Dishwasher_Active))
                {
                    return res;
                }
        }
    /* State mode */
    if(mode_dispatchEvent(me, id) != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(me, Dishwasher_Active))
                {
                    return res;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
static void service_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.service");
    switch (me->service_subState) {
        case Dishwasher_normal:
        {
            normal_serializeStates(me, arcsState);
        }
        break;
        case Dishwasher_faulty:
        {
            faulty_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void service_entDef(Dishwasher* const me) {
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.service");
    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "1");
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.service.normal");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->service_subState = Dishwasher_normal;
    me->service_active = Dishwasher_normal;
    {
        /*#[ state Active.service.normal.(Entry) */
        me->cycles=0;
        /*#]*/
    }
    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "1");
}

static RiCTakeEventStatus service_dispatchEvent(Dishwasher* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->service_active) {
        /* State normal */
        case Dishwasher_normal:
        {
            switch (id) {
                /*## transition 15 */
                case evService_Default_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "15");
                    RiCReactive_popNullConfig(&(me->ric_reactive));
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.service.normal");
                    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.service.normal");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->service_subState = Dishwasher_normal;
                    me->service_active = Dishwasher_normal;
                    {
                        /*#[ state Active.service.normal.(Entry) */
                        me->cycles=0;
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "15");
                    res = eventConsumed;
                }
                break;
                case Null_id:
                {
                    /*## transition 13 */
                    if(isInNeedOfService(me))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Dishwasher, "13");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.service.normal");
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.service.faulty");
                            me->service_subState = Dishwasher_faulty;
                            me->service_active = Dishwasher_faulty;
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "13");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            
        }
        break;
        /* State faulty */
        case Dishwasher_faulty:
        {
            /*## transition 14 */
            if(id == evService_Default_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "14");
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.service.faulty");
                    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.service.normal");
                    RiCReactive_pushNullConfig(&(me->ric_reactive));
                    me->service_subState = Dishwasher_normal;
                    me->service_active = Dishwasher_normal;
                    {
                        /*#[ state Active.service.normal.(Entry) */
                        me->cycles=0;
                        /*#]*/
                    }
                    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "14");
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
static void normal_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.service.normal");
}

static void faulty_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.service.faulty");
}

static void running_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.running");
    switch (me->running_subState) {
        case Dishwasher_off:
        {
            off_serializeStates(me, arcsState);
        }
        break;
        case Dishwasher_open:
        {
            open_serializeStates(me, arcsState);
        }
        break;
        case Dishwasher_on:
        {
            on_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void running_entDef(Dishwasher* const me) {
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running");
    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "0");
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.off");
    me->running_subState = Dishwasher_off;
    me->running_active = Dishwasher_off;
    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "0");
}

static RiCTakeEventStatus running_dispatchEvent(Dishwasher* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->running_active) {
        /* State off */
        case Dishwasher_off:
        {
            if(id == evStart_Default_id)
                {
                    /*## transition 4 */
                    if(IS_IN(me, Dishwasher_faulty) != 1)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "4");
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.off");
                            {
                                /*#[ transition 4 */
                                setup(me);
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on");
                            me->running_subState = Dishwasher_on;
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on.washing");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->on_subState = Dishwasher_washing;
                            me->running_active = Dishwasher_washing;
                            RiCTask_schedTm(me->ric_reactive.myTask, 1000, Dishwasher_Timeout_washing_id, &(me->ric_reactive), "ROOT.Active.running.on.washing");
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        /* State open */
        case Dishwasher_open:
        {
            /*## transition 11 */
            if(id == evClose_Default_id)
                {
                    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "11");
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.open");
                    on_entDef(me);
                    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "11");
                    res = eventConsumed;
                }
            
        }
        break;
        /* State washing */
        case Dishwasher_washing:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Dishwasher_Timeout_washing_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "10");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_washing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.washing");
                            {
                                /*#[ transition 10 */
                                --me->washTime;
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on.washing");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->on_subState = Dishwasher_washing;
                            me->running_active = Dishwasher_washing;
                            RiCTask_schedTm(me->ric_reactive.myTask, 1000, Dishwasher_Timeout_washing_id, &(me->ric_reactive), "ROOT.Active.running.on.washing");
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "10");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 5 */
                    if(me->washTime == 0)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Dishwasher, "5");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_washing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.washing");
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->on_subState = Dishwasher_rinsing;
                            me->running_active = Dishwasher_rinsing;
                            RiCTask_schedTm(me->ric_reactive.myTask, 1000, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive), "ROOT.Active.running.on.rinsing");
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "5");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            if(res == eventNotConsumed)
                {
                    res = Dishwasher_on_takeEvent(me, id);
                }
        }
        break;
        /* State rinsing */
        case Dishwasher_rinsing:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Dishwasher_Timeout_rinsing_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "9");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                            {
                                /*#[ transition 9 */
                                --me->rinseTime;
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->on_subState = Dishwasher_rinsing;
                            me->running_active = Dishwasher_rinsing;
                            RiCTask_schedTm(me->ric_reactive.myTask, 1000, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive), "ROOT.Active.running.on.rinsing");
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "9");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 6 */
                    if(me->rinseTime == 0)
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Dishwasher, "6");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on.drying");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->on_subState = Dishwasher_drying;
                            me->running_active = Dishwasher_drying;
                            RiCTask_schedTm(me->ric_reactive.myTask, 1000, Dishwasher_Timeout_drying_id, &(me->ric_reactive), "ROOT.Active.running.on.drying");
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "6");
                            res = eventConsumed;
                        }
                }
                break;
                default:
                    break;
            }
            if(res == eventNotConsumed)
                {
                    res = Dishwasher_on_takeEvent(me, id);
                }
        }
        break;
        /* State drying */
        case Dishwasher_drying:
        {
            switch (id) {
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == Dishwasher_Timeout_drying_id)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "8");
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_drying_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.drying");
                            {
                                /*#[ transition 8 */
                                --me->dryTime;
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on.drying");
                            RiCReactive_pushNullConfig(&(me->ric_reactive));
                            me->on_subState = Dishwasher_drying;
                            me->running_active = Dishwasher_drying;
                            RiCTask_schedTm(me->ric_reactive.myTask, 1000, Dishwasher_Timeout_drying_id, &(me->ric_reactive), "ROOT.Active.running.on.drying");
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "8");
                            res = eventConsumed;
                        }
                }
                break;
                case Null_id:
                {
                    /*## transition 7 */
                    if(isDried(me))
                        {
                            NOTIFY_NULL_TRANSITION_STARTED(me, Dishwasher, "7");
                            switch (me->on_subState) {
                                /* State washing */
                                case Dishwasher_washing:
                                {
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_washing_id, &(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.washing");
                                }
                                break;
                                /* State rinsing */
                                case Dishwasher_rinsing:
                                {
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                                }
                                break;
                                /* State drying */
                                case Dishwasher_drying:
                                {
                                    RiCReactive_popNullConfig(&(me->ric_reactive));
                                    RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_drying_id, &(me->ric_reactive));
                                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.drying");
                                }
                                break;
                                default:
                                    break;
                            }
                            me->on_subState = Dishwasher_RiCNonState;
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on");
                            {
                                /*#[ transition 7 */
                                me->cycles++;
                                /*#]*/
                            }
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.off");
                            me->running_subState = Dishwasher_off;
                            me->running_active = Dishwasher_off;
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "7");
                            res = eventConsumed;
                        }
                }
                break;
                case evIntDry_Default_id:
                {
                    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "20");
                    switch (me->on_subState) {
                        /* State washing */
                        case Dishwasher_washing:
                        {
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_washing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.washing");
                        }
                        break;
                        /* State rinsing */
                        case Dishwasher_rinsing:
                        {
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_rinsing_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.rinsing");
                        }
                        break;
                        /* State drying */
                        case Dishwasher_drying:
                        {
                            RiCReactive_popNullConfig(&(me->ric_reactive));
                            RiCTask_unschedTm(me->ric_reactive.myTask, Dishwasher_Timeout_drying_id, &(me->ric_reactive));
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on.drying");
                        }
                        break;
                        default:
                            break;
                    }
                    me->on_subState = Dishwasher_RiCNonState;
                    NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.running.on");
                    {
                        /*#[ transition 20 */
                        me->cycles++;
                        /*#]*/
                    }
                    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.off");
                    me->running_subState = Dishwasher_off;
                    me->running_active = Dishwasher_off;
                    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "20");
                    res = eventConsumed;
                }
                break;
                default:
                    break;
            }
            if(res == eventNotConsumed)
                {
                    res = Dishwasher_on_takeEvent(me, id);
                }
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
static void open_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.running.open");
}

static void on_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.running.on");
    switch (me->on_subState) {
        case Dishwasher_washing:
        {
            washing_serializeStates(me, arcsState);
        }
        break;
        case Dishwasher_rinsing:
        {
            rinsing_serializeStates(me, arcsState);
        }
        break;
        case Dishwasher_drying:
        {
            drying_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void on_entDef(Dishwasher* const me) {
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on");
    me->running_subState = Dishwasher_on;
    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "19");
    {
        /*#[ transition 19 */
        setup(me);
        /*#]*/
    }
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.running.on.washing");
    RiCReactive_pushNullConfig(&(me->ric_reactive));
    me->on_subState = Dishwasher_washing;
    me->running_active = Dishwasher_washing;
    RiCTask_schedTm(me->ric_reactive.myTask, 1000, Dishwasher_Timeout_washing_id, &(me->ric_reactive), "ROOT.Active.running.on.washing");
    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "19");
}

#ifdef _OMINSTRUMENT
static void washing_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.running.on.washing");
}

static void rinsing_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.running.on.rinsing");
}

static void drying_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.running.on.drying");
}

static void off_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.running.off");
}

static void mode_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.mode");
    switch (me->mode_subState) {
        case Dishwasher_quick:
        {
            quick_serializeStates(me, arcsState);
        }
        break;
        case Dishwasher_intensive:
        {
            intensive_serializeStates(me, arcsState);
        }
        break;
        case Dishwasher_energySaver:
        {
            energySaver_serializeStates(me, arcsState);
        }
        break;
        default:
            break;
    }
}
#endif /* _OMINSTRUMENT */

static void mode_entDef(Dishwasher* const me) {
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.mode");
    NOTIFY_TRANSITION_STARTED(me, Dishwasher, "2");
    NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.mode.quick");
    me->mode_subState = Dishwasher_quick;
    me->mode_active = Dishwasher_quick;
    NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "2");
}

static RiCTakeEventStatus mode_dispatchEvent(Dishwasher* const me, short id) {
    RiCTakeEventStatus res = eventNotConsumed;
    switch (me->mode_active) {
        /* State quick */
        case Dishwasher_quick:
        {
            if(id == evMode_Default_id)
                {
                    /*## transition 16 */
                    if(IS_IN(me, Dishwasher_on) !=1)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "16");
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.mode.quick");
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.mode.intensive");
                            me->mode_subState = Dishwasher_intensive;
                            me->mode_active = Dishwasher_intensive;
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "16");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        /* State intensive */
        case Dishwasher_intensive:
        {
            if(id == evMode_Default_id)
                {
                    /*## transition 18 */
                    if(IS_IN(me, Dishwasher_on) !=1)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "18");
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.mode.intensive");
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.mode.energySaver");
                            me->mode_subState = Dishwasher_energySaver;
                            me->mode_active = Dishwasher_energySaver;
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "18");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        /* State energySaver */
        case Dishwasher_energySaver:
        {
            if(id == evMode_Default_id)
                {
                    /*## transition 17 */
                    if(~IS_IN(me, Dishwasher_on) != 1)
                        {
                            NOTIFY_TRANSITION_STARTED(me, Dishwasher, "17");
                            NOTIFY_STATE_EXITED(me, Dishwasher, "ROOT.Active.mode.energySaver");
                            NOTIFY_STATE_ENTERED(me, Dishwasher, "ROOT.Active.mode.quick");
                            me->mode_subState = Dishwasher_quick;
                            me->mode_active = Dishwasher_quick;
                            NOTIFY_TRANSITION_TERMINATED(me, Dishwasher, "17");
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
static void quick_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.mode.quick");
}

static void intensive_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.mode.intensive");
}

static void energySaver_serializeStates(const Dishwasher* const me, ARCSState * arcsState) {
    ARCSS_addState_OMH(arcsState, "ROOT.Active.mode.energySaver");
}
#endif /* _OMINSTRUMENT */

static void FreeInstance(Dishwasher* const me) {
    free(me);
}

/*********************************************************************
	File Path	: Test\Sim\Dishwasher.c
*********************************************************************/
