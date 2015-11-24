/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dishwasher
//!	Generated Date	: Tue, 24, Nov 2015  
	File Path	: DefaultComponent\DefaultConfig\Dishwasher.c
*********************************************************************/

#include "Dishwasher.h"
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

void Dishwasher_Init(Dishwasher* const me) {
    me->cycles = 0;
    me->dryTime = 0;
    me->rinseTime = 0;
    me->washTime = 0;
}

void Dishwasher_Cleanup(Dishwasher* const me) {
}

/*## operation isDried() */
static RiCBoolean isDried(Dishwasher* const me) {
    /*#[ operation isDried() */  
    return (0 == me->dryTime);
    /*#]*/
}

/*## operation isInNeedOfService() */
static RiCBoolean isInNeedOfService(Dishwasher* const me) {
    /*#[ operation isInNeedOfService() */
    return (me->cycles > MAX_CYCLES);
    /*#]*/
}

/*## operation isRinsed() */
static RiCBoolean isRinsed(Dishwasher* const me) {
    /*#[ operation isRinsed() */     
    return (0 == me->rinseTime);
    /*#]*/
}

/*## operation isWashed() */
static RiCBoolean isWashed(Dishwasher* const me) {
    /*#[ operation isWashed() */
    return (0 == me->washTime);
    /*#]*/
}

/*## operation setup() */
static void setup(Dishwasher* const me) {
    /*#[ operation setup() */
    me->rinseTime = 4;
    me->washTime = 5;
    me->dryTime = 3;
    /*#]*/
}

Dishwasher * Dishwasher_Create(void) {
    Dishwasher* me = (Dishwasher *) malloc(sizeof(Dishwasher));
    if(me!=NULL)
        {
            Dishwasher_Init(me);
        }
    return me;
}

void Dishwasher_Destroy(Dishwasher* const me) {
    if(me!=NULL)
        {
            Dishwasher_Cleanup(me);
        }
    free(me);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dishwasher.c
*********************************************************************/
