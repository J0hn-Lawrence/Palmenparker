///////////////////////////////////////////////////////////
//  ParkingAid.cpp
//  Implementation of the Class ParkingAid
//  Created on:      14-Jun-2023 16:57:14
//  Original author: pflue
///////////////////////////////////////////////////////////

#include "ParkingAid.h"

using namespace std;



ParkingAid::ParkingAid(int[][2] interval_array_2d, int[] led_pins, int button_pin, bool button_state, int[] ultrasonic_sensor_pins, int[] buzzer_pins){

}


void ParkingAid::run(){

}


/* Begin - EA generated code for StateMachine */








ParkingAid::ParkingAid()
{
	m_StateMachineImpl = NULL;
}

ParkingAid::ParkingAid(ContextManager* pManager, String sInstanceName)
{
	//Initialize Region Variables
	m_parkingaidstatemachine = NOSTATE;
	m_parkingaidstatemachine_run_running = NOSTATE;
	m_parkingaidstatemachine_run_polling = NOSTATE;
	m_parkingaidstatemachine_run_work_leds = NOSTATE;
	m_parkingaidstatemachine_run_work_buzzer = NOSTATE;
	m_parkingaidstatemachine = NOSTATE;
	m_parkingaidstatemachine_run_buzzlight = NOSTATE;
	m_parkingaidstatemachine_run_buttonpoll = NOSTATE;
	m_parkingaidstatemachine_run_work_light = NOSTATE;
	m_parkingaidstatemachine_run_work_buzz = NOSTATE;
    m_sInstanceName = sInstanceName;
    m_sType = "ParkingAid";
	m_StateMachineImpl = new StateMachineImpl(this, pManager);
}

ParkingAid::~ParkingAid()
{
	if (m_StateMachineImpl)
	{
		delete m_StateMachineImpl;
	}
}

bool ParkingAid::defer(Event* event, StateData* toState)
{
	bool bDefer = false;
		
	if(!bDefer)
	{
		if(toState->parent_state)
		{
			bDefer = defer(event, toState->parent_state);
		}
	}
	return bDefer;
}


void ParkingAid::TransitionProc(TransitionEnum transition, Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	switch (transition) {
		case ParkingAid_ENUM_INITIAL_29__TO__RUN_18:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_29__TO__run_18", "{54AFA18B-4C97-48f6-B24C-C99A5AD2613C}", m_sInstanceName);
			Initial_29__TO__run_18(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_32__TO__STANDBY_21:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_32__TO__Standby_21", "{02E43A5A-DF6B-4564-AE08-23D8109D30EC}", m_sInstanceName);
			Initial_32__TO__Standby_21(signal, submachineState); 
			break;

		case ParkingAid_ENUM_CHOICE_41__TO__STANDBY_30:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Choice_41__TO__Standby_30", "{3C73D81E-9B0E-454b-8291-750B99080AF2}", m_sInstanceName);
			Choice_41__TO__Standby_30(signal, submachineState); 
			break;

		case ParkingAid_ENUM_STANDBY__TO__WORK_22:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Standby__TO__work_22", "{43E37041-BE96-40d2-8DEF-349372A3FB50}", m_sInstanceName);
			Standby__TO__work_22(signal, submachineState); 
			break;

		case ParkingAid_ENUM_WORK__TO__STANDBY_23:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_work__TO__Standby_23", "{75CC3860-2815-46d6-B2E2-E424A6B87CB3}", m_sInstanceName);
			work__TO__Standby_23(signal, submachineState); 
			break;

		case ParkingAid_ENUM_LIGHT__TO__MEASURE_27:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_light__TO__measure_27", "{018412D0-86E2-4619-89FD-2C9A3F255916}", m_sInstanceName);
			light__TO__measure_27(signal, submachineState); 
			break;

		case ParkingAid_ENUM_MEASURE__TO__CHOICE_41_28:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_measure__TO__Choice_41_28", "{085442DA-C7ED-43d4-BF4F-58B49E871FB7}", m_sInstanceName);
			measure__TO__Choice_41_28(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_38__TO__LIGHT_26:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_38__TO__light_26", "{719C88AA-8DD0-4294-8746-355CDA34C2FD}", m_sInstanceName);
			Initial_38__TO__light_26(signal, submachineState); 
			break;

		case ParkingAid_ENUM_CHOICE_41__TO__MEASURE_29:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Choice_41__TO__measure_29", "{ECAB4C8A-20D6-46f4-8030-07CA7098EF17}", m_sInstanceName);
			Choice_41__TO__measure_29(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_36__TO__LOOPBUZZ_25:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_36__TO__loopbuzz_25", "{A865A971-E0E7-4ac1-88D2-A54CDABBBF99}", m_sInstanceName);
			Initial_36__TO__loopbuzz_25(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_31__TO__POLLBUTTON_19:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_31__TO__pollButton_19", "{216FF878-EF2D-4ecd-BA43-D221DCA0F396}", m_sInstanceName);
			Initial_31__TO__pollButton_19(signal, submachineState); 
			break;

		case ParkingAid_ENUM_POLLBUTTON__TO__POLLBUTTON_20:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_pollButton__TO__pollButton_20", "{3EFA1486-C7F2-434d-8159-13BD8D63D8A5}", m_sInstanceName);
			pollButton__TO__pollButton_20(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_82__TO__RUN_57:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_82__TO__run_57", "{DAE4E4DE-BF97-4624-82E7-F69EB3D8A1D5}", m_sInstanceName);
			Initial_82__TO__run_57(signal, submachineState); 
			break;

		case ParkingAid_ENUM_WORK__TO__STANDBY_69:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_work__TO__standby_69", "{059C972D-7D5D-4ddc-943E-9B110CFA8714}", m_sInstanceName);
			work__TO__standby_69(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_85__TO__STANDBY_60:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_85__TO__standby_60", "{21332498-1A32-4942-855D-5F7E1CA5C47A}", m_sInstanceName);
			Initial_85__TO__standby_60(signal, submachineState); 
			break;

		case ParkingAid_ENUM_CHOICE_95__TO__STANDBY_68:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Choice_95__TO__standby_68", "{4E07DA17-4F80-456d-859D-469534A6D9C3}", m_sInstanceName);
			Choice_95__TO__standby_68(signal, submachineState); 
			break;

		case ParkingAid_ENUM_STANDBY__TO__WORK_61:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_standby__TO__work_61", "{6B8E30D4-D47B-4d76-9249-A120B20FC4B0}", m_sInstanceName);
			standby__TO__work_61(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_92__TO__LIGHT_64:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_92__TO__light_64", "{3FBE7BE1-2669-49cd-A5C5-0D4819CB88CB}", m_sInstanceName);
			Initial_92__TO__light_64(signal, submachineState); 
			break;

		case ParkingAid_ENUM_CHOICE_95__TO__MEASURE_67:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Choice_95__TO__measure_67", "{499C9C23-2D01-42bd-BC20-3F6947382813}", m_sInstanceName);
			Choice_95__TO__measure_67(signal, submachineState); 
			break;

		case ParkingAid_ENUM_LIGHT__TO__MEASURE_65:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_light__TO__measure_65", "{63D90949-FBA9-4d9c-BDDD-A4315E741F1B}", m_sInstanceName);
			light__TO__measure_65(signal, submachineState); 
			break;

		case ParkingAid_ENUM_MEASURE__TO__CHOICE_95_66:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_measure__TO__Choice_95_66", "{8066CD49-92F4-4d23-8988-42F3077E83D1}", m_sInstanceName);
			measure__TO__Choice_95_66(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_89__TO__BUZZ_62:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_89__TO__buzz_62", "{3B861AC8-7AA6-4479-A929-88DDFAD64F75}", m_sInstanceName);
			Initial_89__TO__buzz_62(signal, submachineState); 
			break;

		case ParkingAid_ENUM_BUZZ__TO__LOOPBUZZ_63:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_buzz__TO__loopbuzz_63", "{6D0E99C2-A217-41a0-AFB2-DBDF920C8829}", m_sInstanceName);
			buzz__TO__loopbuzz_63(signal, submachineState); 
			break;

		case ParkingAid_ENUM_INITIAL_84__TO__POLLBUTTON_58:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_Initial_84__TO__pollButton_58", "{76D2D221-9F1E-4c1a-BC56-B387D3109B7B}", m_sInstanceName);
			Initial_84__TO__pollButton_58(signal, submachineState); 
			break;

		case ParkingAid_ENUM_POLLBUTTON__TO__POLLBUTTON_59:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "ParkingAid_pollButton__TO__pollButton_59", "{9F9D5970-65F7-44b2-89BF-8F8662DC6C64}", m_sInstanceName);
			pollButton__TO__pollButton_59(signal, submachineState); 
			break;
	}
	m_StateMachineImpl->currentTransition.SetTransition(NOTRANSITION, NULL, "NOTRANSITION", "", "");
}

void ParkingAid::Initial_29__TO__run_18_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_29__TO__run_18 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_29__TO__run_18(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(submachineState)
		submachineState->IncrementActiveCount();
	Initial_29__TO__run_18_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Initial_32__TO__Standby_21_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_32__TO__Standby_21 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_32__TO__Standby_21(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN)->IncrementActiveCount();
	Initial_32__TO__Standby_21_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Choice_41__TO__Standby_30_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_41__TO__Standby_30 " << endl;
	GlobalFuncs::trace(ss.str());
	
	interval = last_interval

}

void ParkingAid::Choice_41__TO__Standby_30(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, EXIT, 0);
	Choice_41__TO__Standby_30_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Standby__TO__work_22_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Standby__TO__work_22 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Standby__TO__work_22(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, EXIT, 0);
	Standby__TO__work_22_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::work__TO__Standby_23_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "work__TO__Standby_23 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::work__TO__Standby_23(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, EXIT, 0);
	work__TO__Standby_23_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::light__TO__measure_27_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "light__TO__measure_27 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::light__TO__measure_27(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, submachineState, EXIT, 0);
	light__TO__measure_27_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::measure__TO__Choice_41_28_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "measure__TO__Choice_41_28 " << endl;
	GlobalFuncs::trace(ss.str());
	
	last_interval = distanceController.getInterval()

}

void ParkingAid::measure__TO__Choice_41_28(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, EXIT, 0);
	measure__TO__Choice_41_28_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	
	while(true) {	//a pseudo loop just in order to use break
		if(interval != last_interval) {
			TransitionProc(ParkingAid_ENUM_CHOICE_41__TO__STANDBY_30, signal, submachineState);
			break;
		}
		if(last_interval == interval) {
			TransitionProc(ParkingAid_ENUM_CHOICE_41__TO__MEASURE_29, signal, submachineState);
			break;
		}
	}
	
}

void ParkingAid::Initial_38__TO__light_26_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_38__TO__light_26 " << endl;
	GlobalFuncs::trace(ss.str());
	
	ledController.setLEDs(interval)

}

void ParkingAid::Initial_38__TO__light_26(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK)->IncrementActiveCount();
	Initial_38__TO__light_26_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Choice_41__TO__measure_29_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_41__TO__measure_29 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Choice_41__TO__measure_29(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_41__TO__measure_29_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Initial_36__TO__loopbuzz_25_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_36__TO__loopbuzz_25 " << endl;
	GlobalFuncs::trace(ss.str());
	
	buzzerController.beep(intervall)

}

void ParkingAid::Initial_36__TO__loopbuzz_25(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK)->IncrementActiveCount();
	Initial_36__TO__loopbuzz_25_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Initial_31__TO__pollButton_19_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_31__TO__pollButton_19 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_31__TO__pollButton_19(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN)->IncrementActiveCount();
	Initial_31__TO__pollButton_19_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::pollButton__TO__pollButton_20_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "pollButton__TO__pollButton_20 " << endl;
	GlobalFuncs::trace(ss.str());
	
	button_state = button.poll()

}

void ParkingAid::pollButton__TO__pollButton_20(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, EXIT, 0);
	pollButton__TO__pollButton_20_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Initial_82__TO__run_57_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_82__TO__run_57 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_82__TO__run_57(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(submachineState)
		submachineState->IncrementActiveCount();
	Initial_82__TO__run_57_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::work__TO__standby_69_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "work__TO__standby_69 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::work__TO__standby_69(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, EXIT, 0);
	work__TO__standby_69_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Initial_85__TO__standby_60_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_85__TO__standby_60 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_85__TO__standby_60(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN)->IncrementActiveCount();
	Initial_85__TO__standby_60_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Choice_95__TO__standby_68_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_95__TO__standby_68 " << endl;
	GlobalFuncs::trace(ss.str());
	
	intervall = last_measurement

}

void ParkingAid::Choice_95__TO__standby_68(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, EXIT, 0);
	Choice_95__TO__standby_68_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::standby__TO__work_61_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "standby__TO__work_61 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::standby__TO__work_61(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, EXIT, 0);
	standby__TO__work_61_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Initial_92__TO__light_64_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_92__TO__light_64 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_92__TO__light_64(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK)->IncrementActiveCount();
	Initial_92__TO__light_64_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Choice_95__TO__measure_67_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_95__TO__measure_67 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Choice_95__TO__measure_67(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_95__TO__measure_67_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::light__TO__measure_65_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "light__TO__measure_65 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setLEDs(intervall)

}

void ParkingAid::light__TO__measure_65(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, submachineState, EXIT, 0);
	light__TO__measure_65_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::measure__TO__Choice_95_66_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "measure__TO__Choice_95_66 " << endl;
	GlobalFuncs::trace(ss.str());
	
	last_measurement = getMinimumDistance()

}

void ParkingAid::measure__TO__Choice_95_66(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, EXIT, 0);
	measure__TO__Choice_95_66_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	
	while(true) {	//a pseudo loop just in order to use break
		if(last_measurement == intervall) {
			TransitionProc(ParkingAid_ENUM_CHOICE_95__TO__MEASURE_67, signal, submachineState);
			break;
		}
		if(last_measurement != intervall) {
			TransitionProc(ParkingAid_ENUM_CHOICE_95__TO__STANDBY_68, signal, submachineState);
			break;
		}
	}
	
}

void ParkingAid::Initial_89__TO__buzz_62_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_89__TO__buzz_62 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_89__TO__buzz_62(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK)->IncrementActiveCount();
	Initial_89__TO__buzz_62_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::buzz__TO__loopbuzz_63_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "buzz__TO__loopbuzz_63 " << endl;
	GlobalFuncs::trace(ss.str());
	
	buzz(intervall)

}

void ParkingAid::buzz__TO__loopbuzz_63(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ, submachineState, EXIT, 0);
	buzz__TO__loopbuzz_63_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::Initial_84__TO__pollButton_58_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_84__TO__pollButton_58 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void ParkingAid::Initial_84__TO__pollButton_58(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN)->IncrementActiveCount();
	Initial_84__TO__pollButton_58_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, ENTRY, signal, DefaultEntry);
}

void ParkingAid::pollButton__TO__pollButton_59_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "pollButton__TO__pollButton_59 " << endl;
	GlobalFuncs::trace(ss.str());
	
	button_state = poll();
	poll();

}

void ParkingAid::pollButton__TO__pollButton_59(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON)->IsActiveState())
	{
		return;
	}
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, EXIT, 0);
	pollButton__TO__pollButton_59_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, ENTRY, signal, DefaultEntry);
}

bool ParkingAid::StateProc(int state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, int entryArray[], int nArrayCount) 
{
	EntryEnum entryEnumArray[MAX_STATES];
	for(int i = 0; i < nArrayCount; i++)
	{
		entryEnumArray[i] = (EntryEnum)entryArray[i];
	}
	
	return StateProc((StateEnum)state, submachineState, behavior, signal, enumEntryType, entryEnumArray, nArrayCount);
}
bool ParkingAid::StateProc(StateEnum state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount) 
{
	switch (state) {
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN:
			return ParkingAidStateMachine_run(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY:
			return ParkingAidStateMachine_run_Standby(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK:
			return ParkingAidStateMachine_run_work(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT:
			return ParkingAidStateMachine_run_work_light(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE:
			return ParkingAidStateMachine_run_work_measure(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ:
			return ParkingAidStateMachine_run_work_loopbuzz(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON:
			return ParkingAidStateMachine_run_pollButton(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN:
			return ParkingAidStateMachine_run(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY:
			return ParkingAidStateMachine_run_standby(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK:
			return ParkingAidStateMachine_run_work(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT:
			return ParkingAidStateMachine_run_work_light(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE:
			return ParkingAidStateMachine_run_work_measure(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ:
			return ParkingAidStateMachine_run_work_buzz(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ:
			return ParkingAidStateMachine_run_work_loopbuzz(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON:
			return ParkingAidStateMachine_run_pollButton(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);
	}
	return false;
}

bool ParkingAid::ParkingAidStateMachine_run(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_behavior(DO, signal);
		
			EntryEnum entrys[MAX_STATES];
			if(enumEntryType == DefaultEntry)
			{
				const int nInitialCount = 2;
				nArrayCount = nInitialCount;
				EntryEnum entryArrayTemp[nInitialCount] = {ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_32, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_31};
				memcpy ( entrys, entryArrayTemp, sizeof(EntryEnum) * nArrayCount);
			}
			else
			{
				memcpy ( entrys, entryArray, sizeof(EntryEnum) * nArrayCount);
			}
			for(int i = 0; i < nArrayCount; i++)
			{
				switch(entrys[i])
				{
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_32:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_32__TO__STANDBY_21, signal, submachineState);
	
					break;
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_31:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_31__TO__POLLBUTTON_19, signal, submachineState);
	
					break;
				}
			}
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
	
			if(state->active_count > 1)
			{
				//DeActive Region running
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, EXIT, 0) || StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, EXIT, 0))
					state->DecrementActiveCount();
				//DeActive Region polling
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, EXIT, 0))
					state->DecrementActiveCount();
			}
			m_parkingaidstatemachine = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_Standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_running = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_Standby_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_Standby_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_running = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_Standby_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_Standby_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_Standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_Standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_Standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_running = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_behavior(DO, signal);
		
			EntryEnum entrys[MAX_STATES];
			if(enumEntryType == DefaultEntry)
			{
				const int nInitialCount = 2;
				nArrayCount = nInitialCount;
				EntryEnum entryArrayTemp[nInitialCount] = {ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_38, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_36};
				memcpy ( entrys, entryArrayTemp, sizeof(EntryEnum) * nArrayCount);
			}
			else
			{
				memcpy ( entrys, entryArray, sizeof(EntryEnum) * nArrayCount);
			}
			for(int i = 0; i < nArrayCount; i++)
			{
				switch(entrys[i])
				{
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_38:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_38__TO__LIGHT_26, signal, submachineState);
	
					break;
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_36:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_36__TO__LOOPBUZZ_25, signal, submachineState);
	
					break;
				}
			}
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
	
			if(state->active_count > 1)
			{
				//DeActive Region leds
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, submachineState, EXIT, 0) || StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, EXIT, 0))
					state->DecrementActiveCount();
				//DeActive Region buzzer
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ, submachineState, EXIT, 0))
					state->DecrementActiveCount();
			}
			m_parkingaidstatemachine_run_running = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_light(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_work_leds = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_light_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_light_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_work_leds = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_light_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_light_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work_light " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work_light " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work_light " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_measure(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_work_leds = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_measure_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_measure_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_work_leds = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_measure_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_measure_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work_measure " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work_measure " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work_measure " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_loopbuzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_work_buzzer = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_loopbuzz_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_loopbuzz_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_work_buzzer = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_loopbuzz_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_loopbuzz_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work_loopbuzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work_loopbuzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work_loopbuzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_pollButton(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_polling = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_pollButton_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_pollButton_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_polling = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_pollButton_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_pollButton_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_pollButton " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_pollButton " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_pollButton " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_behavior(DO, signal);
		
			EntryEnum entrys[MAX_STATES];
			if(enumEntryType == DefaultEntry)
			{
				const int nInitialCount = 2;
				nArrayCount = nInitialCount;
				EntryEnum entryArrayTemp[nInitialCount] = {ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_85, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_84};
				memcpy ( entrys, entryArrayTemp, sizeof(EntryEnum) * nArrayCount);
			}
			else
			{
				memcpy ( entrys, entryArray, sizeof(EntryEnum) * nArrayCount);
			}
			for(int i = 0; i < nArrayCount; i++)
			{
				switch(entrys[i])
				{
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_85:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_85__TO__STANDBY_60, signal, submachineState);
	
					break;
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_INITIAL_84:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_84__TO__POLLBUTTON_58, signal, submachineState);
	
					break;
				}
			}
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
	
			if(state->active_count > 1)
			{
				//DeActive Region buzzlight
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, submachineState, EXIT, 0) || StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, submachineState, EXIT, 0))
					state->DecrementActiveCount();
				//DeActive Region buttonpoll
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, submachineState, EXIT, 0))
					state->DecrementActiveCount();
			}
			m_parkingaidstatemachine = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_buzzlight = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_standby_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_standby_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_buzzlight = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_standby_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_standby_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_buzzlight = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_behavior(DO, signal);
		
			EntryEnum entrys[MAX_STATES];
			if(enumEntryType == DefaultEntry)
			{
				const int nInitialCount = 2;
				nArrayCount = nInitialCount;
				EntryEnum entryArrayTemp[nInitialCount] = {ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_92, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_89};
				memcpy ( entrys, entryArrayTemp, sizeof(EntryEnum) * nArrayCount);
			}
			else
			{
				memcpy ( entrys, entryArray, sizeof(EntryEnum) * nArrayCount);
			}
			for(int i = 0; i < nArrayCount; i++)
			{
				switch(entrys[i])
				{
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_92:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_92__TO__LIGHT_64, signal, submachineState);
	
					break;
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_INITIAL_89:
	
	
					TransitionProc(ParkingAid_ENUM_INITIAL_89__TO__BUZZ_62, signal, submachineState);
	
					break;
				}
			}
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
	
			if(state->active_count > 1)
			{
				//DeActive Region light
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, submachineState, EXIT, 0) || StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, submachineState, EXIT, 0))
					state->DecrementActiveCount();
				//DeActive Region buzz
				if(StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ, submachineState, EXIT, 0) || StateProc(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ, submachineState, EXIT, 0))
					state->DecrementActiveCount();
			}
			m_parkingaidstatemachine_run_buzzlight = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_light(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_work_light = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_light_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_light_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_work_light = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_light_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_light_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work_light " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work_light " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work_light " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_measure(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_work_light = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_measure_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_measure_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_work_light = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_measure_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_measure_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work_measure " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work_measure " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work_measure " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_buzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_work_buzz = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_buzz_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_buzz_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_work_buzz = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_buzz_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_buzz_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work_buzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work_buzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work_buzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_loopbuzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_work_buzz = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_work_loopbuzz_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_work_loopbuzz_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_work_buzz = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_work_loopbuzz_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_work_loopbuzz_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_work_loopbuzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_work_loopbuzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_work_loopbuzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_pollButton(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_parkingaidstatemachine_run_buttonpoll = ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON;
			state->IncrementActiveCount();
			ParkingAidStateMachine_run_pollButton_behavior(ENTRY, signal);
			
			ParkingAidStateMachine_run_pollButton_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_parkingaidstatemachine_run_buttonpoll = NOSTATE;
			state->DecrementActiveCount();
			ParkingAidStateMachine_run_pollButton_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool ParkingAid::ParkingAidStateMachine_run_pollButton_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "ParkingAidStateMachine_run_pollButton " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "ParkingAidStateMachine_run_pollButton " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "ParkingAidStateMachine_run_pollButton " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool ParkingAid::dispatch(Event* event, StateData* toState, bool bCheckOnly) 
{
	if (!m_StateMachineImpl)
		return false;
	
	bool bDispatched = false;
	
	if(!toState || !toState->IsActiveState() && !bCheckOnly)
		return bDispatched;
	
	switch (toState->state_enum) {
		case ParkingAid_VIRTUAL_SUBMACHINESTATE:
			if(event->eventEnum == COMPLETION)
			{
				if(!bCheckOnly)
				{
					m_StateMachineImpl->ReleaseSubmachineState(toState);
					for (list<StateData*>::iterator it = m_StateMachineImpl->lstStateData.begin(); it != m_StateMachineImpl->lstStateData.end(); )
					{
						StateData* state = *it;
						if (state == toState)
						{
							it = m_StateMachineImpl->lstStateData.erase(it);
							break;
						}
						else
							++it;
					}
					delete toState;
					toState = NULL;
				}				
				bDispatched = true;
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(button_state == true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_STANDBY__TO__WORK_22, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(button_state == false) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_WORK__TO__STANDBY_23, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_LIGHT__TO__MEASURE_27, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_MEASURE__TO__CHOICE_41_28, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_POLLBUTTON__TO__POLLBUTTON_20, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(button_state == true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_STANDBY__TO__WORK_61, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(button_state == false) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_WORK__TO__STANDBY_69, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_LIGHT__TO__MEASURE_65, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_MEASURE__TO__CHOICE_95_66, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_BUZZ__TO__LOOPBUZZ_63, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(ParkingAid_ENUM_POLLBUTTON__TO__POLLBUTTON_59, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
	}
	
	if(!bDispatched && toState && toState->parent_state && event->eventEnum != COMPLETION)
	{
		bDispatched = dispatch(event, toState->parent_state, true);
		if(bDispatched && !bCheckOnly)
		{
			/*1. Exit the current state; 2. Decrement the active count of the parent state; 3. dispatch the event to parent state*/
			StateProc((StateEnum)toState->state_enum, toState->submachine_state, EXIT, 0);
			toState->parent_state->DecrementActiveCount();
			dispatch(event, toState->parent_state, false);
			event = 0;
		}
	}
	
	return bDispatched;
}

void ParkingAid::runStateMachine(StateMachineEnum statemachine) 
{
	if (!m_StateMachineImpl)
		return;
	
	list<StateData*> activeStateArray;
	if(m_StateMachineImpl->GetCurrentStates(activeStateArray) > 0)
		return;
	
	switch (statemachine) {
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE:
			{
				const int nArrayCount = 1;
				EntryEnum entryArray[nArrayCount] = {ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_INITIAL_29};
				runStateMachine(statemachine, NULL, 0, entryArray, nArrayCount);	//submachineState is NULL if run standalone statemachine 
			}
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE:
			{
				const int nArrayCount = 1;
				EntryEnum entryArray[nArrayCount] = {ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_INITIAL_82};
				runStateMachine(statemachine, NULL, 0, entryArray, nArrayCount);	//submachineState is NULL if run standalone statemachine 
			}
			break;
	}
}

void ParkingAid::runStateMachines()
{
	runStateMachine(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE);
	runStateMachine(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE);
}

void ParkingAid::runStateMachine(String statemachine)
{
	if(statemachine == "ParkingAid_ParkingAidStateMachine")
	{
		runStateMachine(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE);
		return;
	}
	if(statemachine == "ParkingAid_ParkingAidStateMachine")
	{
		runStateMachine(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE);
		return;
	}
}

void ParkingAid::runStateMachine(StateMachineEnum statemachine, StateData* submachineState, Signal* signal, EntryEnum entryArray[], int nEntryCount) 
{
	if(!submachineState)
	{
		StateInitialData initialData(ParkingAid_VIRTUAL_SUBMACHINESTATE, NOSTATE, 1, false, "ParkingAid_VIRTUAL_SUBMACHINESTATE", "", ""); 
		submachineState = new StateData(m_StateMachineImpl, &initialData);
		
		submachineState->IncrementActiveCount();
		m_StateMachineImpl->lstStateData.push_back(submachineState);
	}
	switch (statemachine) {
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE:
			{
				const int nArrayCount = 7;
				StateInitialData initialDataArray[nArrayCount] = 
					{
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, NOSTATE, 2, false, "ParkingAid_ParkingAidStateMachine_run", "{CBE039B1-85C8-489c-8564-BCE991BDB1D1}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, 0, false, "ParkingAid_ParkingAidStateMachine_run_Standby", "{88B1EB2A-9FB3-4e7a-A08D-08376CC3CFDC}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, 2, false, "ParkingAid_ParkingAidStateMachine_run_work", "{5BC6CF9A-CD26-498a-A3A0-16AE8753E4D3}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, 0, false, "ParkingAid_ParkingAidStateMachine_run_work_light", "{7FC63378-79FE-4358-9969-5EF7BA6D9393}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, 0, false, "ParkingAid_ParkingAidStateMachine_run_work_measure", "{D48A8881-55AE-4f99-BF58-4B28AE8A71B1}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, 0, false, "ParkingAid_ParkingAidStateMachine_run_work_loopbuzz", "{F9468039-1C8D-4c11-A362-9A04251468A5}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, 0, false, "ParkingAid_ParkingAidStateMachine_run_pollButton", "{FF64C842-8C6D-4b29-90BB-7ABF09693FC3}", m_sInstanceName)
					};
		
				m_StateMachineImpl->CreateStateObjects(initialDataArray, nArrayCount, submachineState);
			}
			for(int i = 0; i < nEntryCount; i++)
			{
				switch(entryArray[i])
				{
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_INITIAL_29:
					TransitionProc(ParkingAid_ENUM_INITIAL_29__TO__RUN_18, signal, submachineState);
					break;
				}
			}
			if(submachineState->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
			break;
		case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE:
			{
				const int nArrayCount = 8;
				StateInitialData initialDataArray[nArrayCount] = 
					{
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, NOSTATE, 2, false, "ParkingAid_ParkingAidStateMachine_run", "{AEDAE913-F8E0-4ea1-A245-FA85D73C5AB5}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_STANDBY, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, 0, false, "ParkingAid_ParkingAidStateMachine_run_standby", "{A7086BFA-67AA-40ff-B9A8-B22BD77D4ABF}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, 2, false, "ParkingAid_ParkingAidStateMachine_run_work", "{801F0F49-D843-48c4-8D9C-CB2B2BE17ACE}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LIGHT, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, 0, false, "ParkingAid_ParkingAidStateMachine_run_work_light", "{F97659DC-1A22-4d30-AD31-AD349CA982C6}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_MEASURE, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, 0, false, "ParkingAid_ParkingAidStateMachine_run_work_measure", "{66F6D6E4-5430-4a5e-855D-15984FFDCFE4}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_BUZZ, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, 0, false, "ParkingAid_ParkingAidStateMachine_run_work_buzz", "{EF1EE692-BB43-413c-93CC-6110165969E1}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK_LOOPBUZZ, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_WORK, 0, false, "ParkingAid_ParkingAidStateMachine_run_work_loopbuzz", "{AA47E1B4-B9C9-42cc-AAF0-5D59D1722D96}", m_sInstanceName),
						StateInitialData(ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN_POLLBUTTON, ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_RUN, 0, false, "ParkingAid_ParkingAidStateMachine_run_pollButton", "{144299CB-1B31-48ee-A918-6D5C87403C88}", m_sInstanceName)
					};
		
				m_StateMachineImpl->CreateStateObjects(initialDataArray, nArrayCount, submachineState);
			}
			for(int i = 0; i < nEntryCount; i++)
			{
				switch(entryArray[i])
				{
				case ParkingAid_ENUM_PARKINGAIDSTATEMACHINE_INITIAL_82:
					TransitionProc(ParkingAid_ENUM_INITIAL_82__TO__RUN_57, signal, submachineState);
					break;
				}
			}
			if(submachineState->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
			break;
	}
}

String ParkingAid::GetInstanceName()
{
	return m_sInstanceName;
}

String ParkingAid::GetTypeName()
{
	return m_sType;
}







/* End - EA generated code for StateMachine */