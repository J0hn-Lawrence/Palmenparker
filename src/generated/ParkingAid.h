///////////////////////////////////////////////////////////
//  ParkingAid.h
//  Implementation of the Class ParkingAid
//  Created on:      14-Jun-2023 16:57:14
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_AD529FBF_2FDC_4d4f_BC2B_448E874B99A5__INCLUDED_)
#define EA_AD529FBF_2FDC_4d4f_BC2B_448E874B99A5__INCLUDED_

#include "ContextManager.h"
#include "StmCommonForwardDeclaration.h"
#include "Button.h"
#include "BuzzerController.h"
#include "DistanceController.h"
#include "LEDController.h"

class ParkingAid : public StateMachineContext
{

public:
	Button *m_Button;
	BuzzerController *m_BuzzerController;
	DistanceController *m_DistanceController;
	LEDController *m_LEDController;

	ParkingAid(int[][2] interval_array_2d, int[] led_pins, int button_pin, bool button_state, int[] ultrasonic_sensor_pins, int[] buzzer_pins);
	void run();

private:
	Button button;
	int button_pin;
	bool button_state;
	int[] buzzer_pins;
	BuzzerController buzzerController;
	DistanceController distanceController;
	int[][2] interval_array_2d;
	int[] led_pins;
	LEDController ledController;
	int[] ultrasonic_sensor_pins;

	/* Begin - EA generated code for StateMachine */






public:
	enum StateMachineEnum 
	{
		NOSTATEMACHINE,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE
	};

	enum StateEnum 
	{
		NOSTATE,
		ParkingAid_VIRTUAL_SUBMACHINESTATE,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON
	};

	enum TransitionEnum 
	{
		NOTRANSITION,
		ParkingAid_ENUM_INITIAL_29__TO__RUN_18,
		ParkingAid_ENUM_INITIAL_32__TO__STANDBY_21,
		ParkingAid_ENUM_CHOICE_41__TO__STANDBY_30,
		ParkingAid_ENUM_STANDBY__TO__WORK_22,
		ParkingAid_ENUM_WORK__TO__STANDBY_23,
		ParkingAid_ENUM_LIGHT__TO__MEASURE_27,
		ParkingAid_ENUM_MEASURE__TO__CHOICE_41_28,
		ParkingAid_ENUM_INITIAL_38__TO__LIGHT_26,
		ParkingAid_ENUM_CHOICE_41__TO__MEASURE_29,
		ParkingAid_ENUM_INITIAL_36__TO__LOOPBUZZ_25,
		ParkingAid_ENUM_INITIAL_31__TO__POLLBUTTON_19,
		ParkingAid_ENUM_POLLBUTTON__TO__POLLBUTTON_20,
		ParkingAid_ENUM_INITIAL_82__TO__RUN_57,
		ParkingAid_ENUM_WORK__TO__STANDBY_69,
		ParkingAid_ENUM_INITIAL_85__TO__STANDBY_60,
		ParkingAid_ENUM_CHOICE_95__TO__STANDBY_68,
		ParkingAid_ENUM_STANDBY__TO__WORK_61,
		ParkingAid_ENUM_INITIAL_92__TO__LIGHT_64,
		ParkingAid_ENUM_CHOICE_95__TO__MEASURE_67,
		ParkingAid_ENUM_LIGHT__TO__MEASURE_65,
		ParkingAid_ENUM_MEASURE__TO__CHOICE_95_66,
		ParkingAid_ENUM_INITIAL_89__TO__BUZZ_62,
		ParkingAid_ENUM_BUZZ__TO__LOOPBUZZ_63,
		ParkingAid_ENUM_INITIAL_84__TO__POLLBUTTON_58,
		ParkingAid_ENUM_POLLBUTTON__TO__POLLBUTTON_59
	};

	enum EntryEnum
	{
		NOENTRY,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_INITIAL_29,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_32,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_38,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_36,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_31,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_INITIAL_82,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_85,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_92,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_89,
		ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_84
	};

	ParkingAid();
	ParkingAid(ContextManager* pManager, String sInstanceName);
	
	virtual ~ParkingAid();
	
	StateMachineImpl* m_StateMachineImpl;
	
    String m_sInstanceName;
    String m_sType;
	StateEnum m_parkingaidstatemachine;
	StateEnum m_parkingaidstatemachine_run_running;
	StateEnum m_parkingaidstatemachine_run_polling;
	StateEnum m_parkingaidstatemachine_run_work_leds;
	StateEnum m_parkingaidstatemachine_run_work_buzzer;
	StateEnum m_parkingaidstatemachine;
	StateEnum m_parkingaidstatemachine_run_buzzlight;
	StateEnum m_parkingaidstatemachine_run_buttonpoll;
	StateEnum m_parkingaidstatemachine_run_work_light;
	StateEnum m_parkingaidstatemachine_run_work_buzz;
public:
	void TransitionProc(TransitionEnum transition, Signal* signal, StateData* submachineState);

	
	void Initial_29__TO__run_18_effect(Signal* signal);
	void Initial_29__TO__run_18(Signal* signal, StateData* submachineState);
	void Initial_32__TO__Standby_21_effect(Signal* signal);
	void Initial_32__TO__Standby_21(Signal* signal, StateData* submachineState);
	void Choice_41__TO__Standby_30_effect(Signal* signal);
	void Choice_41__TO__Standby_30(Signal* signal, StateData* submachineState);
	void Standby__TO__work_22_effect(Signal* signal);
	void Standby__TO__work_22(Signal* signal, StateData* submachineState);
	void work__TO__Standby_23_effect(Signal* signal);
	void work__TO__Standby_23(Signal* signal, StateData* submachineState);
	void light__TO__measure_27_effect(Signal* signal);
	void light__TO__measure_27(Signal* signal, StateData* submachineState);
	void measure__TO__Choice_41_28_effect(Signal* signal);
	void measure__TO__Choice_41_28(Signal* signal, StateData* submachineState);
	void Initial_38__TO__light_26_effect(Signal* signal);
	void Initial_38__TO__light_26(Signal* signal, StateData* submachineState);
	void Choice_41__TO__measure_29_effect(Signal* signal);
	void Choice_41__TO__measure_29(Signal* signal, StateData* submachineState);
	void Initial_36__TO__loopbuzz_25_effect(Signal* signal);
	void Initial_36__TO__loopbuzz_25(Signal* signal, StateData* submachineState);
	void Initial_31__TO__pollButton_19_effect(Signal* signal);
	void Initial_31__TO__pollButton_19(Signal* signal, StateData* submachineState);
	void pollButton__TO__pollButton_20_effect(Signal* signal);
	void pollButton__TO__pollButton_20(Signal* signal, StateData* submachineState);
	void Initial_82__TO__run_57_effect(Signal* signal);
	void Initial_82__TO__run_57(Signal* signal, StateData* submachineState);
	void work__TO__standby_69_effect(Signal* signal);
	void work__TO__standby_69(Signal* signal, StateData* submachineState);
	void Initial_85__TO__standby_60_effect(Signal* signal);
	void Initial_85__TO__standby_60(Signal* signal, StateData* submachineState);
	void Choice_95__TO__standby_68_effect(Signal* signal);
	void Choice_95__TO__standby_68(Signal* signal, StateData* submachineState);
	void standby__TO__work_61_effect(Signal* signal);
	void standby__TO__work_61(Signal* signal, StateData* submachineState);
	void Initial_92__TO__light_64_effect(Signal* signal);
	void Initial_92__TO__light_64(Signal* signal, StateData* submachineState);
	void Choice_95__TO__measure_67_effect(Signal* signal);
	void Choice_95__TO__measure_67(Signal* signal, StateData* submachineState);
	void light__TO__measure_65_effect(Signal* signal);
	void light__TO__measure_65(Signal* signal, StateData* submachineState);
	void measure__TO__Choice_95_66_effect(Signal* signal);
	void measure__TO__Choice_95_66(Signal* signal, StateData* submachineState);
	void Initial_89__TO__buzz_62_effect(Signal* signal);
	void Initial_89__TO__buzz_62(Signal* signal, StateData* submachineState);
	void buzz__TO__loopbuzz_63_effect(Signal* signal);
	void buzz__TO__loopbuzz_63(Signal* signal, StateData* submachineState);
	void Initial_84__TO__pollButton_58_effect(Signal* signal);
	void Initial_84__TO__pollButton_58(Signal* signal, StateData* submachineState);
	void pollButton__TO__pollButton_59_effect(Signal* signal);
	void pollButton__TO__pollButton_59(Signal* signal, StateData* submachineState);
	
	bool StateProc(StateEnum state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType = DefaultEntry, EntryEnum entryArray[] = NULL, int nArrayCount = 0);

	
	bool ParkingAidStateMachine_run(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_Standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_Standby_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work_light(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_light_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work_measure(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_measure_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work_loopbuzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_loopbuzz_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_pollButton(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_pollButton_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_standby_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work_light(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_light_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work_measure(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_measure_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work_buzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_buzz_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_work_loopbuzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_work_loopbuzz_behavior(StateBehaviorEnum behavior, Signal* signal);
	bool ParkingAidStateMachine_run_pollButton(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount);
	bool ParkingAidStateMachine_run_pollButton_behavior(StateBehaviorEnum behavior, Signal* signal);
	
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
#endif // !defined(EA_AD529FBF_2FDC_4d4f_BC2B_448E874B99A5__INCLUDED_)
