/*********************************************************************
	Rhapsody in C	: 8.1.1 
	Login		: adamlang
	Component	: Test 
	Configuration 	: Debug
	Model Element	: Debug
//!	Generated Date	: Tue, 24, Nov 2015  
	File Path	: Test\Debug\MainTest.c
*********************************************************************/

#include "MainTest.h"
#include "Default.h"
#include "Dishwasher.h"
void Test_Init(void) {
    Default_OMEvent_Init();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(RiCOXFInit(argc, argv, 6423, "", 0, 0, RiCTRUE))
        {
            Dishwasher * p_Dishwasher;
            Test_Init();
            p_Dishwasher = Dishwasher_Create(RiCMainTask());
            Dishwasher_startBehavior(p_Dishwasher);
            /*#[ configuration Test::Debug */
            /*#]*/
            RiCOXFStart(FALSE);
            Dishwasher_Destroy(p_Dishwasher);
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Test\Debug\MainTest.c
*********************************************************************/
