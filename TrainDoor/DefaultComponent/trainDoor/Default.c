/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: trainDoor
	Model Element	: Default
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\trainDoor\Default.c
*********************************************************************/

/*## auto_generated */
#include "Default.h"
/*## auto_generated */
#include "trainDoor.h"
/*## package Default */



void evBPress_Init(evBPress* const me) {
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

/*********************************************************************
	File Path	: DefaultComponent\trainDoor\Default.c
*********************************************************************/
