/* ------------------------------------------------------------------------------------------
 * Header file generated with rguilayout
 *
 * USAGE:
 *     #define $(GUILAYOUT_NAME_UPPERCASE)_IMPLEMENTATION
 *     #include $(GUILAYOUT_NAME).h
 *
 *     Gui$(GUILAYOUT_NAME_PASCALCASE)State state = InitGui$(GUILAYOUT_NAME_PASCALCASE)();
 *     Gui$(GUILAYOUT_NAME_PASCALCASE)(&state);
 -------------------------------------------------------------------------------------------*/

#include "raylib.h"
#undef RAYGUI_IMPLEMENTATION
#include "raygui.h"

#include <string.h>

#ifndef $(GUILAYOUT_NAME_UPPERCASE)_H
#define $(GUILAYOUT_NAME_UPPERCASE)_H

$(GUILAYOUT_STRUCT_TYPE)

//----------------------------------------------------------------------------------
// Defines and Macros
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Types and Structures Definition
//----------------------------------------------------------------------------------
// ...

//----------------------------------------------------------------------------------
// Module Functions Declaration
//----------------------------------------------------------------------------------
$(GUILAYOUT_FUNCTIONS_DECLARATION_H)

#endif // $(GUILAYOUT_NAME_UPPERCASE)_H

/***********************************************************************************
*
*   $(GUILAYOUT_NAME_UPPERCASE) IMPLEMENTATION
*
************************************************************************************/
#if defined($(GUILAYOUT_NAME_UPPERCASE)_IMPLEMENTATION)

#include "raygui.h"

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Internal Module Functions Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Module Functions Definition
//----------------------------------------------------------------------------------
$(GUILAYOUT_FUNCTION_INITIALIZE_H)

$(GUILAYOUT_FUNCTION_DRAWING_H)

#endif // $(GUILAYOUT_NAME_UPPERCASE)_IMPLEMENTATION
