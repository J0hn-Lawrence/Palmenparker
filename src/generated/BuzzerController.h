///////////////////////////////////////////////////////////
//  BuzzerController.h
//  Implementation of the Class BuzzerController
//  Created on:      14-Jun-2023 16:57:08
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_DFA11EE5_B3E7_4ca4_8464_4055AB9DFAC3__INCLUDED_)
#define EA_DFA11EE5_B3E7_4ca4_8464_4055AB9DFAC3__INCLUDED_

#include "ContextManager.h"
#include "StmCommonForwardDeclaration.h"
#include "Buzzer.h"

class BuzzerController : public StateMachineContext
{

public:
	Buzzer *m_Buzzer;

	BuzzerController(Buzzer buzzers[]);
	void beep(int intervall);

private:
	Buzzer buzzers[];

	/* Begin - EA generated code for StateMachine */






public:
	enum StateMachineEnum 
	{
		NOSTATEMACHINE,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE
	};

	enum StateEnum 
	{
		NOSTATE,
		BuzzerController_VIRTUAL_SUBMACHINESTATE,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STATE2,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF0,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON5
	};

	enum TransitionEnum 
	{
		NOTRANSITION,
		BuzzerController_ENUM_CHOICE_62__TO__OFF2_45,
		BuzzerController_ENUM_CHOICE_62__TO__ON5_48,
		BuzzerController_ENUM_EVALUATE__TO__CHOICE_62_42,
		BuzzerController_ENUM_BUZZ__TO__EVALUATE_70,
		BuzzerController_ENUM_CHOICE_62__TO__OFF4_47,
		BuzzerController_ENUM_CHOICE_62__TO__OFF0_43,
		BuzzerController_ENUM_STANDBY__TO__EVALUATE_41,
		BuzzerController_ENUM_INITIAL_59__TO__STANDBY_40,
		BuzzerController_ENUM_CHOICE_62__TO__OFF3_46,
		BuzzerController_ENUM_CHOICE_62__TO__OFF1_44,
		BuzzerController_ENUM_ON1__TO__OFF1_53,
		BuzzerController_ENUM_ON4__TO__OFF4_56,
		BuzzerController_ENUM_OFF2__TO__ON2_50,
		BuzzerController_ENUM_ON3__TO__OFF3_55,
		BuzzerController_ENUM_ON2__TO__OFF2_54,
		BuzzerController_ENUM_OFF3__TO__ON3_51,
		BuzzerController_ENUM_OFF1__TO__ON1_49,
		BuzzerController_ENUM_OFF4__TO__ON4_52
	};

	enum EntryEnum
	{
		NOENTRY,
		BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_INITIAL_59
	};

	BuzzerController();
	BuzzerController(ContextManager* pManager, String sInstanceName);
	
	virtual ~BuzzerController();
	
	StateMachineImpl* m_StateMachineImpl;
	
    String m_sInstanceName;
    String m_sType;
	StateEnum m_buzzercontrollerstatemachine;
	StateEnum m_buzzercontrollerstatemachine_buzz;
public:
	void TransitionProc(TransitionEnum transition, Signal* signal, StateData* submachineState);

	
	void Choice_62__TO__off2_45_effect(Signal* signal);
	void Choice_62__TO__off2_45(Signal* signal, StateData* submachineState);
	void Choice_62__TO__on5_48_effect(Signal* signal);
	void Choice_62__TO__on5_48(Signal* signal, StateData* submachineState);
	void evaluate__TO__Choice_62_42_effect(Signal* signal);
	void evaluate__TO__Choice_62_42(Signal* signal, StateData* submachineState);
	void buzz__TO__evaluate_70_effect(Signal* signal);
	void buzz__TO__evaluate_70(Signal* signal, StateData* submachineState);
	void Choice_62__TO__off4_47_effect(Signal* signal);
	void Choice_62__TO__off4_47(Signal* signal, StateData* submachineState);
	void Choice_62__TO__off0_43_effect(Signal* signal);
	void Choice_62__TO__off0_43(Signal* signal, StateData* submachineState);
	void standby__TO__evaluate_41_effect(Signal* signal);
	void standby__TO__evaluate_41(Signal* signal, StateData* submachineState);
	void Initial_59__TO__standby_40_effect(Signal* signal);
	void Initial_59__TO__standby_40(Signal* signal, StateData* submachineState);
	void Choice_62__TO__off3_46_effect(Signal* signal);
	void Choice_62__TO__off3_46(Signal* signal, StateData* submachineState);
	void Choice_62__TO__off1_44_effect(Signal* signal);
	void Choice_62__TO__off1_44(Signal* signal, StateData* submachineState);
	void on1__TO__off1_53_effect(Signal* signal);
	void on1__TO__off1_53(Signal* signal, StateData* submachineState);
	void on4__TO__off4_56_effect(Signal* signal);
	void on4__TO__off4_56(Signal* signal, StateData* submachineState);
	void off2__TO__on2_50_effect(Signal* signal);
	void off2__TO__on2_50(Signal* signal, StateData* submachineState);
	void on3__TO__off3_55_effect(Signal* signal);
	void on3__TO__off3_55(Signal* signal, StateData* submachineState);
	void on2__TO__off2_54_effect(Signal* signal);
	void on2__TO__off2_54(Signal* signal, StateData* submachineState);
	void off3__TO__on3_51_effect(Signal* signal);
	void off3__TO__on3_51(Signal* signal, StateData* submachineState);
	void off1__TO__on1_49_effect(Signal* signal);
	void off1__TO__on1_49(Signal* signal, StateData* submachineState);
	void off4__TO__on4_52_effect(Signal* signal);
	void off4__TO__on4_52(Signal* signal, StateData* submachineState);
	
	bool StateProc(StateEnum state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType = DefaultEntry, EntryEnum entryArray[] = NULL, int nArrayCount = 0);

	
	bool BuzzerControllerStateMachine_buzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_evaluate(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_evaluate_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_standby_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_State2(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_State2_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_off0(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_off0_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_off1(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_off1_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_off2(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_off2_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_off3(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_off3_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_off4(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_off4_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_on1(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_on1_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_on2(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_on2_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_on3(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_on3_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_on4(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_on4_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool BuzzerControllerStateMachine_buzz_on5(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool BuzzerControllerStateMachine_buzz_on5_behavior(StateBehaviorEnum behavior, Signal* signal);
	
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
#endif // !defined(EA_DFA11EE5_B3E7_4ca4_8464_4055AB9DFAC3__INCLUDED_)
