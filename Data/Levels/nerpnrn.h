// First of all, lets timestamp this file.
;;;;;;;;;;;;;;;;;;;;;
; NERPs Source File ;
;;;;;;;;;;;;;;;;;;;;;
; Generated 
; __DATE__
;;;;;;;;;;;;;;;;;;;;;
; Stamp it here:
__TIME__:
;;;;;;;;;;;;;;;;;;;;;

// Include command macros
#include <nerpdef.h>

// These are standard macros

/////////////////////////////////////////////////////////////////////////////////
//                            Internally Used Macros                           //
/////////////////////////////////////////////////////////////////////////////////

// Prints message onscreen - used internally
#define msg(x) TRUE ? _SetR4(x) \
	TRUE ? _AddR4(_GetR5()) \
	_GetR0() = 1 ? _SetMessage(_GetR4(),0)

// Prints message onscreen WITHOUT arrows - used internally
#define msgn(x) TRUE ? _SetR4(x) \
	TRUE ? _AddR4(_GetR5()) \
	_GetR0() = 1 ? _SetMessage(_GetR4(),1)

/////////////////////////////////////////////////////////////////////////////////
//                              Message Printing                               //
/////////////////////////////////////////////////////////////////////////////////

// Increment message until x - waits for previous message to finish
#define wait(x) _GetR5() < x ? :wbe

// Removes messages from window
#define Clear() _SetMessage(_GetR4(),1) \
	TRUE ? _SetMessagePermit(1)

/////////////////////////////////////////////////////////////////////////////////
//                                Function Types                               //
/////////////////////////////////////////////////////////////////////////////////

// Defines function start and decides whether to skip it or not
#define Func(x) TRUE ? _AddR6(1) \
	TRUE ? _SetR2(1) \
	TRUE ? _AddR2(_GetR3()) \
	_GetR2() != _GetR6() ? :\
x/ \
	x: \
	msg( _GetR7() )

// (Without arrows)Defines function start and decides whether to skip it or not
#define Funcn(x) TRUE ? _AddR6(1) \
	TRUE ? _SetR2(1) \
	TRUE ? _AddR2(_GetR3()) \
	_GetR2() != _GetR6() ? :\
x/ \
	x: \
	msgn( _GetR7() )

// This is a function that does not print any messages whatsoever
#define Function(x) TRUE ? _AddR6(1) \
	TRUE ? _SetR2(1) \
	TRUE ? _AddR2(_GetR3()) \
	_GetR2() != _GetR6() ? :\
x/ \
	x: \

// Defines function end - place to skip to
#define FuncEnd(x) TRUE ? :Next \
	x/:

// Restart functions
#define Start() TRUE ? _SetR3() 0 \
	TRUE ? _SetR6() 0 \
	Stop

// Defines start of main function
#define Main() __MainFunc:

// Defines end of main function
#define MainEnd() TRUE ? :Complete

// Jump to label
#define goto(x) :x


// These are bit I seemed to have in every NRN file.

// Bypass everything if objective still showing - will get past this when space pressed
//GetObjectiveSwitch ? SetMessagePermit 0
//GetObjectiveSwitch ? :Skip
//GetObjectiveShowing = 1 ? :Skip

_GetObjectiveSwitch() ? _SetMessagePermit(0)
_GetObjectiveSwitch() ? :SkippedSkip
_GetObjectiveShowing() = 1 ? :Skip
SkippedSkip:

//Set wait times (sample length multiplier, time added after sample, time for no sample)
TRUE ? _SetMessageTimerValues(1000,1000,10000)

//GetOxygenLevel = 0 ? SetLevelFail

//R0 is used as a general counter
TRUE ? _AddR0(1)

// Record function numbers
TRUE ? _SetR6(0)

// Jump to after the standard labels below
TRUE ? :end

Wbe:
_GetMessageTimer() > 0 ? Stop
TRUE ? _SetTimer0(0)
TRUE ? _SetR0(0)
TRUE ? _AddR5(1)
Stop

Skip:
TRUE ? _SetTutorialFlags(4095)
TRUE ? _SetMessagePermit(1)
TRUE ? _SetTimer0(0)
TRUE ? _SetTimer1(0)
TRUE ? _SetTimer2(0)
TRUE ? _SetR0(0)
TRUE ? _SetR1(0)	// This is just reset here, but not used
TRUE ? _SetR5(0)
TRUE ? _SetR7(1)
TRUE ? _CameraUnlock()
Stop

Next:
TRUE ? _AddR3(1)
Clear:
TRUE ? _SetR0(0)
TRUE ? _SetTimer0(0)
TRUE ? _AddR7(_GetR5())
TRUE ? _SetR5(0)
Stop

finish:
Stop

Complete:
_GetMessageTimer() > 0 ? Stop 
TRUE ? _SetLevelCompleted()
Stop

// Continue running from here...
end:


// IMPORTANT NOTES:
/////////////////////

// Register 0 is reserved for per-message counting
// Register 2 is reserved for auto-function calling
// Register 3 is reserved for current-function counter
// Register 4 is reserved for initial function message number
// Register 5 is reserved for per-function message offset
// Register 6 is reserved for auto-function calling
// Register 7 is reserved for automatic message numbering

// thus leaving register 1 spare, which shall probably be needed for further NERPS++ development.
// Maybe sometime it could be an idea to set aside
// some extra registers especially for the above.

