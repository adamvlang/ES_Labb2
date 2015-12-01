/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: Simulation
	Model Element	: Simulation
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\Simulation\MainDefaultComponent.c
*********************************************************************/

/*## auto_generated */
#include "MainDefaultComponent.h"
/*## auto_generated */
#include "Default.h"
/*## auto_generated */
#include "trainDoor.h"
void DefaultComponent_Init(void) {
    Default_OMEvent_Init();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(RiCOXFInit(argc, argv, 6423, "", 0, 0, RiCTRUE))
        {
            trainDoor * p_trainDoor;
            DefaultComponent_Init();
            p_trainDoor = trainDoor_Create(RiCMainTask());
            trainDoor_startBehavior(p_trainDoor);
            /*#[ configuration DefaultComponent::Simulation */
            /*#]*/
            RiCOXFStart(FALSE);
            trainDoor_Destroy(p_trainDoor);
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\Simulation\MainDefaultComponent.c
*********************************************************************/
