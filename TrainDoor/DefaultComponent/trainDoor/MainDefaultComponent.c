/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: andfro
	Component	: DefaultComponent 
	Configuration 	: trainDoor
	Model Element	: trainDoor
//!	Generated Date	: Tue, 1, Dec 2015  
	File Path	: DefaultComponent\trainDoor\MainDefaultComponent.c
*********************************************************************/

/*## auto_generated */
#include "MainDefaultComponent.h"
/*## auto_generated */
#include "trainDoor.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(RiCOXFInit(argc, argv, 6423, "", 0, 0, RiCTRUE))
        {
            trainDoor * p_trainDoor;
            p_trainDoor = trainDoor_Create(RiCMainTask());
            trainDoor_startBehavior(p_trainDoor);
            /*#[ configuration DefaultComponent::trainDoor */
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
	File Path	: DefaultComponent\trainDoor\MainDefaultComponent.c
*********************************************************************/
