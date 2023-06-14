///////////////////////////////////////////////////////////
//  LEDController.h
//  Implementation of the Class LEDController
//  Created on:      14-Jun-2023 16:57:12
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_A91B66BD_919A_435c_976A_B83E61AA6C97__INCLUDED_)
#define EA_A91B66BD_919A_435c_976A_B83E61AA6C97__INCLUDED_

#include "ContextManager.h"
#include "StmCommonForwardDeclaration.h"
#include "LED.h"

class LEDController : public StateMachineContext
{

public:
	LED *m_LED;

	LEDController(LED[] leds);
	void setLEDs(int intervall);

private:
	LED[] leds;

	/* Begin - EA generated code for StateMachine */






public:
	enum StateMachineEnum 
	{
		NOSTATEMACHINE,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE
	};

	enum StateEnum 
	{
		NOSTATE,
		LEDController_VIRTUAL_SUBMACHINESTATE,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_27,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_57,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY
	};

	enum TransitionEnum 
	{
		NOTRANSITION,
		LEDController_ENUM_INITIAL_26__TO__FINAL_27_17,
		LEDController_ENUM_LOOPOFF__TO__FINAL_57_37,
		LEDController_ENUM_INITIAL_53__TO__STANDBY_34,
		LEDController_ENUM_LOOPON__TO__LOOPOFF_36,
		LEDController_ENUM_STANDBY__TO__LOOPON_35,
		LEDController_ENUM_LOOPOFF__TO__LOOPOFF_39,
		LEDController_ENUM_LOOPON__TO__LOOPON_38
	};

	enum EntryEnum
	{
		NOENTRY,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_INITIAL_26,
		LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_INITIAL_53
	};

	LEDController();
	LEDController(ContextManager* pManager, String sInstanceName);
	
	virtual ~LEDController();
	
	StateMachineImpl* m_StateMachineImpl;
	
    String m_sInstanceName;
    String m_sType;
	StateEnum m_ledcontrollerstatemachine;
	StateEnum m_ledcontrollerstatemachine;
public:
	void TransitionProc(TransitionEnum transition, Signal* signal, StateData* submachineState);

	
	void Initial_26__TO__Final_27_17_effect(Signal* signal);
	void Initial_26__TO__Final_27_17(Signal* signal, StateData* submachineState);
	void loopOff__TO__Final_57_37_effect(Signal* signal);
	void loopOff__TO__Final_57_37(Signal* signal, StateData* submachineState);
	void Initial_53__TO__Standby_34_effect(Signal* signal);
	void Initial_53__TO__Standby_34(Signal* signal, StateData* submachineState);
	void loopOn__TO__loopOff_36_effect(Signal* signal);
	void loopOn__TO__loopOff_36(Signal* signal, StateData* submachineState);
	void Standby__TO__loopOn_35_effect(Signal* signal);
	void Standby__TO__loopOn_35(Signal* signal, StateData* submachineState);
	void loopOff__TO__loopOff_39_effect(Signal* signal);
	void loopOff__TO__loopOff_39(Signal* signal, StateData* submachineState);
	void loopOn__TO__loopOn_38_effect(Signal* signal);
	void loopOn__TO__loopOn_38(Signal* signal, StateData* submachineState);
	
	bool StateProc(StateEnum state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType = DefaultEntry, EntryEnum entryArray[] = NULL, int nArrayCount = 0);

	
	bool LEDControllerStateMachine_Final_27(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool LEDControllerStateMachine_Final_57(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool LEDControllerStateMachine_loopOff(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool LEDControllerStateMachine_loopOff_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool LEDControllerStateMachine_loopOn(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool LEDControllerStateMachine_loopOn_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool LEDControllerStateMachine_Standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool LEDControllerStateMachine_Standby_behavior(StateBehaviorEnum behavior, Signal* signal);
	
	virtual void runStateMachines() ;
	virtual void runStateMachine(String statemachine);
	virtual void runStateMachine(StateMachineEnum statemachine);
	virtual void runStateMachine(StateMachineEnum statemachine, StateData* submachineState, Signal* signal, EntryEnum entryArray[] = NULL, int nEntryCount = 0);
	virtual bool StateProc(int state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, int entryArray[], int nArrayCount);
	virtual bool dispatch(Event* event, StateData* toState, bool bCheckOnly);
	
	virtual bool defer(Event* event, StateData* toState);
	
	virtual String GetInstanceName();
	virtual String GetTypeName();




	/* End - EA generated code for StateMachine */

};
#endif // !defined(EA_A91B66BD_919A_435c_976A_B83E61AA6C97__INCLUDED_)
