/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: trainDoor
	Model Element	: trainDoor
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\trainDoor\trainDoor.c
*********************************************************************/

/*## auto_generated */
#include <oxf\RiCTask.h>
/*## auto_generated */
#include "trainDoor.h"
/*## package Default */

/*## class trainDoor */
/*## auto_generated */
static void initStatechart(trainDoor* const me);

/*## statechart_method */
static void rootState_entDef(void * const void_me);

/*## statechart_method */
static RiCTakeEventStatus rootState_dispatchEvent(void * const void_me, short id);

/*#[ ignore */
static void FreeInstance(trainDoor* const me);
/*#]*/

/*## operation Init() */
void trainDoor_Init(trainDoor* const me, RiCTask * p_task) {
    /* Virtual tables Initialization */
    static const RiCReactive_Vtbl trainDoor_reactiveVtbl = {
        rootState_dispatchEvent,
        rootState_entDef,
        NULL,
        (RiCObjectDestroyMethod) trainDoor_Destroy,
        NULL,
        NULL,
        NULL,
        (RiCObjectCleanupMethod) trainDoor_Cleanup,
        (RiCObjectFreeMethod) FreeInstance
    };
    me->closeTime = 5;
    me->openTime = 5;
    RiCReactive_init(&(me->ric_reactive), (void*)me, p_task, &trainDoor_reactiveVtbl);
    RiCReactive_setActive(&(me->ric_reactive), RiCFALSE);
    initStatechart(me);
    /*#[ operation Init() */
    /*#]*/
}

void trainDoor_Cleanup(trainDoor* const me) {
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

static void rootState_entDef(void * const void_me) {
    
    trainDoor * const me = (trainDoor *)void_me;
    {
        me->rootState_subState = trainDoor_closed;
        me->rootState_active = trainDoor_closed;
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
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_open_id, &(me->ric_reactive));
                            me->rootState_subState = trainDoor_closing;
                            me->rootState_active = trainDoor_closing;
                            RiCTask_schedTm(me->ric_reactive.myTask, me->closeTime, trainDoor_Timeout_closing_id, &(me->ric_reactive), NULL);
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
                    RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
                    me->rootState_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), NULL);
                    res = eventConsumed;
                }
                break;
                /*## transition 1 */
                case Timeout_id:
                {
                    if(RiCTimeout_getTimeoutId((RiCTimeout*) me->ric_reactive.current_event) == trainDoor_Timeout_closing_id)
                        {
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_closing_id, &(me->ric_reactive));
                            me->rootState_subState = trainDoor_closed;
                            me->rootState_active = trainDoor_closed;
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
                    me->rootState_subState = trainDoor_opening;
                    me->rootState_active = trainDoor_opening;
                    RiCTask_schedTm(me->ric_reactive.myTask, me->openTime, trainDoor_Timeout_opening_id, &(me->ric_reactive), NULL);
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
                            RiCTask_unschedTm(me->ric_reactive.myTask, trainDoor_Timeout_opening_id, &(me->ric_reactive));
                            me->rootState_subState = trainDoor_open;
                            me->rootState_active = trainDoor_open;
                            RiCTask_schedTm(me->ric_reactive.myTask, 10000, trainDoor_Timeout_open_id, &(me->ric_reactive), NULL);
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

/*#[ ignore */
static void FreeInstance(trainDoor* const me) {
    free(me);
}
/*#]*/

/*********************************************************************
	File Path	: DefaultComponent\trainDoor\trainDoor.c
*********************************************************************/
