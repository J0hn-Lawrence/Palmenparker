///////////////////////////////////////////////////////////
//  BuzzerController.cpp
//  Implementation of the Class BuzzerController
//  Created on:      14-Jun-2023 16:57:08
//  Original author: pflue
///////////////////////////////////////////////////////////
#include <unistd.h>
#include "BuzzerController.h"

using namespace std;



BuzzerController::BuzzerController(Buzzer buzzers[]){

}


void BuzzerController::beep(int intervall){

	switch (intervall){
	case 0:
	buzzers[0].setOn();
	break;
	case 1:
	while(1){
	buzzers[0].setOn();
	sleep(250);
	buzzers[0].setOff();
	sleep(250);
	}
	break;
	case 2:
	while(1){
	buzzers[0].setOn();
	sleep(83.333);
	buzzers[0].setOff();
	sleep(83.333);
	}
	break;
	case 3:
	while(1){
	buzzers[0].setOn();
	sleep(62.5);
	buzzers[0].setOff();
	sleep(62.5);
	}
	break;
	case 4:
	while(1){
	buzzers[0].setOn();
	sleep(50);
	buzzers[0].setOff();
	sleep(50);
	}
	break;
	case 5:
	buzzers[0].setOff();
	break;
	}
}


/* Begin - EA generated code for StateMachine */








BuzzerController::BuzzerController()
{
	m_StateMachineImpl = NULL;
}

BuzzerController::BuzzerController(ContextManager* pManager, String sInstanceName)
{
	//Initialize Region Variables
	m_buzzercontrollerstatemachine = NOSTATE;
	m_buzzercontrollerstatemachine_buzz = NOSTATE;
    m_sInstanceName = sInstanceName;
    m_sType = "BuzzerController";
	m_StateMachineImpl = new StateMachineImpl(this, pManager);
}

BuzzerController::~BuzzerController()
{
	if (m_StateMachineImpl)
	{
		delete m_StateMachineImpl;
	}
}

bool BuzzerController::defer(Event* event, StateData* toState)
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


void BuzzerController::TransitionProc(TransitionEnum transition, Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	switch (transition) {
		case BuzzerController_ENUM_CHOICE_62__TO__OFF2_45:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_Choice_62__TO__off2_45", "{19BA5BCC-F5C3-4263-9244-BD02D0927360}", m_sInstanceName);
			Choice_62__TO__off2_45(signal, submachineState); 
			break;

		case BuzzerController_ENUM_CHOICE_62__TO__ON5_48:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_Choice_62__TO__on5_48", "{19E9541D-3D5A-4ff8-9033-5F3730DA44FF}", m_sInstanceName);
			Choice_62__TO__on5_48(signal, submachineState); 
			break;

		case BuzzerController_ENUM_EVALUATE__TO__CHOICE_62_42:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_evaluate__TO__Choice_62_42", "{4B556D26-EA81-4e41-91D2-800A492C335E}", m_sInstanceName);
			evaluate__TO__Choice_62_42(signal, submachineState); 
			break;

		case BuzzerController_ENUM_BUZZ__TO__EVALUATE_70:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_buzz__TO__evaluate_70", "{4D82BF0E-F6F1-4fef-811A-C609142F6692}", m_sInstanceName);
			buzz__TO__evaluate_70(signal, submachineState); 
			break;

		case BuzzerController_ENUM_CHOICE_62__TO__OFF4_47:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_Choice_62__TO__off4_47", "{73271267-FF60-42b6-9C82-D08C41279A0E}", m_sInstanceName);
			Choice_62__TO__off4_47(signal, submachineState); 
			break;

		case BuzzerController_ENUM_CHOICE_62__TO__OFF0_43:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_Choice_62__TO__off0_43", "{8429BDE4-D689-4ea7-A5D5-FB27808CF099}", m_sInstanceName);
			Choice_62__TO__off0_43(signal, submachineState); 
			break;

		case BuzzerController_ENUM_STANDBY__TO__EVALUATE_41:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_standby__TO__evaluate_41", "{9AA1DA4D-C9C4-442a-99E7-3B578699BC83}", m_sInstanceName);
			standby__TO__evaluate_41(signal, submachineState); 
			break;

		case BuzzerController_ENUM_INITIAL_59__TO__STANDBY_40:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_Initial_59__TO__standby_40", "{9D376261-C2AC-4953-BCAB-427EC2B12F0F}", m_sInstanceName);
			Initial_59__TO__standby_40(signal, submachineState); 
			break;

		case BuzzerController_ENUM_CHOICE_62__TO__OFF3_46:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_Choice_62__TO__off3_46", "{ABC423B5-556F-4c8e-8251-856807997509}", m_sInstanceName);
			Choice_62__TO__off3_46(signal, submachineState); 
			break;

		case BuzzerController_ENUM_CHOICE_62__TO__OFF1_44:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_Choice_62__TO__off1_44", "{B8DC491F-DF36-42ce-957C-A873CBDDD7BD}", m_sInstanceName);
			Choice_62__TO__off1_44(signal, submachineState); 
			break;

		case BuzzerController_ENUM_ON1__TO__OFF1_53:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_on1__TO__off1_53", "{0E7CB6E7-01D5-40b3-A865-0DC4DF88AEA4}", m_sInstanceName);
			on1__TO__off1_53(signal, submachineState); 
			break;

		case BuzzerController_ENUM_ON4__TO__OFF4_56:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_on4__TO__off4_56", "{1548BD77-69D2-49dd-9ED2-83A7B35105A4}", m_sInstanceName);
			on4__TO__off4_56(signal, submachineState); 
			break;

		case BuzzerController_ENUM_OFF2__TO__ON2_50:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_off2__TO__on2_50", "{4D5FD879-7B1E-480b-A95F-C731F5B0EFEC}", m_sInstanceName);
			off2__TO__on2_50(signal, submachineState); 
			break;

		case BuzzerController_ENUM_ON3__TO__OFF3_55:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_on3__TO__off3_55", "{5CA2DDAC-4BEA-4d40-AC58-3C7CDF5ACC8C}", m_sInstanceName);
			on3__TO__off3_55(signal, submachineState); 
			break;

		case BuzzerController_ENUM_ON2__TO__OFF2_54:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_on2__TO__off2_54", "{818B64E8-B38E-4af0-B919-72366A5E30BB}", m_sInstanceName);
			on2__TO__off2_54(signal, submachineState); 
			break;

		case BuzzerController_ENUM_OFF3__TO__ON3_51:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_off3__TO__on3_51", "{B9B24588-AA8F-433a-90BB-062E72D81FAF}", m_sInstanceName);
			off3__TO__on3_51(signal, submachineState); 
			break;

		case BuzzerController_ENUM_OFF1__TO__ON1_49:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_off1__TO__on1_49", "{E1F3F778-9309-4672-8339-2195F0B6D9F7}", m_sInstanceName);
			off1__TO__on1_49(signal, submachineState); 
			break;

		case BuzzerController_ENUM_OFF4__TO__ON4_52:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "BuzzerController_off4__TO__on4_52", "{F42A7B39-034D-4b61-8521-79766BB5A0A3}", m_sInstanceName);
			off4__TO__on4_52(signal, submachineState); 
			break;
	}
	m_StateMachineImpl->currentTransition.SetTransition(NOTRANSITION, NULL, "NOTRANSITION", "", "");
}

void BuzzerController::Choice_62__TO__off2_45_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_62__TO__off2_45 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::Choice_62__TO__off2_45(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_62__TO__off2_45_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, submachineState, ENTRY, signal, ExplicitEntry);
	m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ)->IncrementActiveCount();

	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::Choice_62__TO__on5_48_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_62__TO__on5_48 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOn()

}

void BuzzerController::Choice_62__TO__on5_48(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_62__TO__on5_48_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, submachineState, ENTRY, signal, ExplicitEntry);
	m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ)->IncrementActiveCount();

	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON5, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::evaluate__TO__Choice_62_42_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "evaluate__TO__Choice_62_42 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void BuzzerController::evaluate__TO__Choice_62_42(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE, submachineState, EXIT, 0);
	evaluate__TO__Choice_62_42_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	
	while(true) {	//a pseudo loop just in order to use break
		if(intervall == 2) {
			TransitionProc(BuzzerController_ENUM_CHOICE_62__TO__OFF2_45, signal, submachineState);
			break;
		}
		if(intervall == 5) {
			TransitionProc(BuzzerController_ENUM_CHOICE_62__TO__ON5_48, signal, submachineState);
			break;
		}
		if(intervall == 4) {
			TransitionProc(BuzzerController_ENUM_CHOICE_62__TO__OFF4_47, signal, submachineState);
			break;
		}
		if(intervall == 0) {
			TransitionProc(BuzzerController_ENUM_CHOICE_62__TO__OFF0_43, signal, submachineState);
			break;
		}
		if(intervall == 3) {
			TransitionProc(BuzzerController_ENUM_CHOICE_62__TO__OFF3_46, signal, submachineState);
			break;
		}
		if(intervall == 1) {
			TransitionProc(BuzzerController_ENUM_CHOICE_62__TO__OFF1_44, signal, submachineState);
			break;
		}
	}
	
}

void BuzzerController::buzz__TO__evaluate_70_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "buzz__TO__evaluate_70 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void BuzzerController::buzz__TO__evaluate_70(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, submachineState, EXIT, 0);
	buzz__TO__evaluate_70_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::Choice_62__TO__off4_47_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_62__TO__off4_47 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::Choice_62__TO__off4_47(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_62__TO__off4_47_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, submachineState, ENTRY, signal, ExplicitEntry);
	m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ)->IncrementActiveCount();

	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::Choice_62__TO__off0_43_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_62__TO__off0_43 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::Choice_62__TO__off0_43(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_62__TO__off0_43_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, submachineState, ENTRY, signal, ExplicitEntry);
	m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ)->IncrementActiveCount();

	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF0, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::standby__TO__evaluate_41_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "standby__TO__evaluate_41 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void BuzzerController::standby__TO__evaluate_41(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY, submachineState, EXIT, 0);
	standby__TO__evaluate_41_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::Initial_59__TO__standby_40_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_59__TO__standby_40 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void BuzzerController::Initial_59__TO__standby_40(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(submachineState)
		submachineState->IncrementActiveCount();
	Initial_59__TO__standby_40_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::Choice_62__TO__off3_46_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_62__TO__off3_46 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::Choice_62__TO__off3_46(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_62__TO__off3_46_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, submachineState, ENTRY, signal, ExplicitEntry);
	m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ)->IncrementActiveCount();

	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::Choice_62__TO__off1_44_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Choice_62__TO__off1_44 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::Choice_62__TO__off1_44(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	Choice_62__TO__off1_44_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, submachineState, ENTRY, signal, ExplicitEntry);
	m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ)->IncrementActiveCount();

	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::on1__TO__off1_53_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "on1__TO__off1_53 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff

}

void BuzzerController::on1__TO__off1_53(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1, submachineState, EXIT, 0);
	on1__TO__off1_53_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::on4__TO__off4_56_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "on4__TO__off4_56 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::on4__TO__off4_56(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4, submachineState, EXIT, 0);
	on4__TO__off4_56_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::off2__TO__on2_50_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "off2__TO__on2_50 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOn()

}

void BuzzerController::off2__TO__on2_50(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2, submachineState, EXIT, 0);
	off2__TO__on2_50_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::on3__TO__off3_55_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "on3__TO__off3_55 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::on3__TO__off3_55(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3, submachineState, EXIT, 0);
	on3__TO__off3_55_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::on2__TO__off2_54_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "on2__TO__off2_54 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOff()

}

void BuzzerController::on2__TO__off2_54(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2, submachineState, EXIT, 0);
	on2__TO__off2_54_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::off3__TO__on3_51_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "off3__TO__on3_51 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOn()

}

void BuzzerController::off3__TO__on3_51(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3, submachineState, EXIT, 0);
	off3__TO__on3_51_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::off1__TO__on1_49_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "off1__TO__on1_49 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOn()

}

void BuzzerController::off1__TO__on1_49(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1, submachineState, EXIT, 0);
	off1__TO__on1_49_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1, submachineState, ENTRY, signal, DefaultEntry);
}

void BuzzerController::off4__TO__on4_52_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "off4__TO__on4_52 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setOn()

}

void BuzzerController::off4__TO__on4_52(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4)->IsActiveState())
	{
		return;
	}
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4, submachineState, EXIT, 0);
	off4__TO__on4_52_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4, submachineState, ENTRY, signal, DefaultEntry);
}

bool BuzzerController::StateProc(int state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, int entryArray[], int nArrayCount) 
{
	EntryEnum entryEnumArray[MAX_STATES];
	for(int i = 0; i < nArrayCount; i++)
	{
		entryEnumArray[i] = (EntryEnum)entryArray[i];
	}
	
	return StateProc((StateEnum)state, submachineState, behavior, signal, enumEntryType, entryEnumArray, nArrayCount);
}
bool BuzzerController::StateProc(StateEnum state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount) 
{
	switch (state) {
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ:
			return BuzzerControllerStateMachine_buzz(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE:
			return BuzzerControllerStateMachine_evaluate(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY:
			return BuzzerControllerStateMachine_standby(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STATE2:
			return BuzzerControllerStateMachine_State2(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF0:
			return BuzzerControllerStateMachine_buzz_off0(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1:
			return BuzzerControllerStateMachine_buzz_off1(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2:
			return BuzzerControllerStateMachine_buzz_off2(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3:
			return BuzzerControllerStateMachine_buzz_off3(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4:
			return BuzzerControllerStateMachine_buzz_off4(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1:
			return BuzzerControllerStateMachine_buzz_on1(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2:
			return BuzzerControllerStateMachine_buzz_on2(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3:
			return BuzzerControllerStateMachine_buzz_on3(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4:
			return BuzzerControllerStateMachine_buzz_on4(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON5:
			return BuzzerControllerStateMachine_buzz_on5(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);
	}
	return false;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
	
			if(state->active_count > 1)
			{
				//DeActive Region buzz
				if(StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF0, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4, submachineState, EXIT, 0) || StateProc(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON5, submachineState, EXIT, 0))
					state->DecrementActiveCount();
			}
			m_buzzercontrollerstatemachine = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_evaluate(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_evaluate_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_evaluate_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_evaluate_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_evaluate_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_evaluate " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_evaluate " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_evaluate " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_standby_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_standby_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_standby_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_standby_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_State2(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STATE2);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STATE2;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_State2_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_State2_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_State2_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_State2_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_State2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_State2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_State2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off0(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF0);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF0;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_off0_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_off0_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_off0_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off0_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_off0 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_off0 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_off0 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off1(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_off1_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_off1_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_off1_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off1_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_off1 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_off1 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_off1 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off2(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_off2_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_off2_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_off2_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off2_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_off2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_off2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_off2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off3(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_off3_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_off3_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_off3_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off3_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_off3 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_off3 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_off3 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off4(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_off4_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_off4_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_off4_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_off4_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_off4 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_off4 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_off4 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on1(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_on1_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_on1_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_on1_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on1_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_on1 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_on1 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_on1 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on2(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_on2_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_on2_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_on2_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on2_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_on2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_on2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_on2 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on3(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_on3_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_on3_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_on3_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on3_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_on3 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_on3 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_on3 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on4(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_on4_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_on4_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_on4_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on4_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_on4 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_on4 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_on4 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on5(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON5);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON5;
			state->IncrementActiveCount();
			BuzzerControllerStateMachine_buzz_on5_behavior(ENTRY, signal);
			
			BuzzerControllerStateMachine_buzz_on5_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_buzzercontrollerstatemachine_buzz = NOSTATE;
			state->DecrementActiveCount();
			BuzzerControllerStateMachine_buzz_on5_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool BuzzerController::BuzzerControllerStateMachine_buzz_on5_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "BuzzerControllerStateMachine_buzz_on5 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "BuzzerControllerStateMachine_buzz_on5 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "BuzzerControllerStateMachine_buzz_on5 " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool BuzzerController::dispatch(Event* event, StateData* toState, bool bCheckOnly) 
{
	if (!m_StateMachineImpl)
		return false;
	
	bool bDispatched = false;
	
	if(!toState || !toState->IsActiveState() && !bCheckOnly)
		return bDispatched;
	
	switch (toState->state_enum) {
		case BuzzerController_VIRTUAL_SUBMACHINESTATE:
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
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ:
			switch (event->eventEnum) {
				case ENUM_BEEP(INT):
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_BUZZ__TO__EVALUATE_70, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_EVALUATE__TO__CHOICE_62_42, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_STANDBY__TO__EVALUATE_41, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1:
			switch (event->eventEnum) {
				case ENUM_AFTER250MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_OFF1__TO__ON1_49, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2:
			switch (event->eventEnum) {
				case ENUM_AFTER83.333MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_OFF2__TO__ON2_50, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3:
			switch (event->eventEnum) {
				case ENUM_AFTER62.5MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_OFF3__TO__ON3_51, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4:
			switch (event->eventEnum) {
				case ENUM_AFTER50MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_OFF4__TO__ON4_52, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1:
			switch (event->eventEnum) {
				case ENUM_AFTER250MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_ON1__TO__OFF1_53, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2:
			switch (event->eventEnum) {
				case ENUM_AFTER83.333MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_ON2__TO__OFF2_54, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3:
			switch (event->eventEnum) {
				case ENUM_AFTER62.5MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_ON3__TO__OFF3_55, event->signal, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4:
			switch (event->eventEnum) {
				case ENUM_AFTER50MS:
					if(true) {
						if(!bCheckOnly)
							TransitionProc(BuzzerController_ENUM_ON4__TO__OFF4_56, event->signal, toState->submachine_state);
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

void BuzzerController::runStateMachine(StateMachineEnum statemachine) 
{
	if (!m_StateMachineImpl)
		return;
	
	list<StateData*> activeStateArray;
	if(m_StateMachineImpl->GetCurrentStates(activeStateArray) > 0)
		return;
	
	switch (statemachine) {
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE:
			{
				const int nArrayCount = 1;
				EntryEnum entryArray[nArrayCount] = {BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_INITIAL_59};
				runStateMachine(statemachine, NULL, 0, entryArray, nArrayCount);	//submachineState is NULL if run standalone statemachine 
			}
			break;
	}
}

void BuzzerController::runStateMachines()
{
	runStateMachine(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE);
}

void BuzzerController::runStateMachine(String statemachine)
{
	if(statemachine == "BuzzerController_BuzzerControllerStateMachine")
	{
		runStateMachine(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE);
		return;
	}
}

void BuzzerController::runStateMachine(StateMachineEnum statemachine, StateData* submachineState, Signal* signal, EntryEnum entryArray[], int nEntryCount) 
{
	if(!submachineState)
	{
		StateInitialData initialData(BuzzerController_VIRTUAL_SUBMACHINESTATE, NOSTATE, 1, false, "BuzzerController_VIRTUAL_SUBMACHINESTATE", "", ""); 
		submachineState = new StateData(m_StateMachineImpl, &initialData);
		
		submachineState->IncrementActiveCount();
		m_StateMachineImpl->lstStateData.push_back(submachineState);
	}
	switch (statemachine) {
		case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE:
			{
				const int nArrayCount = 14;
				StateInitialData initialDataArray[nArrayCount] = 
					{
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, NOSTATE, 1, false, "BuzzerController_BuzzerControllerStateMachine_buzz", "{18FA6C5F-D0B7-4fcd-BEB9-0FD6F7DC00C9}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_EVALUATE, NOSTATE, 0, false, "BuzzerController_BuzzerControllerStateMachine_evaluate", "{9C7AD77D-704D-4b90-A2CF-B971B87112A9}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STANDBY, NOSTATE, 0, false, "BuzzerController_BuzzerControllerStateMachine_standby", "{207B7607-AA6E-4d4f-8DD2-2BE6919D4162}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_STATE2, NOSTATE, 0, false, "BuzzerController_BuzzerControllerStateMachine_State2", "{4224EAE9-4E96-454b-BA87-D27BD98116BF}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF0, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_off0", "{1537C65A-FAFD-43c4-B3B3-0CEAAA76C499}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF1, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_off1", "{05ABB80F-0CF3-478b-AB77-22CAEA899FE0}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF2, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_off2", "{3A95C1B3-9753-4c36-AB4A-F01EFE8ABC5B}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF3, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_off3", "{D8FB4FB3-24F8-43c6-9E93-B526E7C25250}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_OFF4, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_off4", "{AF425D51-C0C4-4330-A7A1-4270CF22DF13}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON1, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_on1", "{5D9882AB-0EBC-410d-9781-FEF7FCF36936}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON2, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_on2", "{B90B5862-4D99-40d2-9724-985B02B528CC}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON3, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_on3", "{8EDAB9A7-7A07-418c-9D94-9768EA641D2A}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON4, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_on4", "{BC41FB77-BEDD-4fbf-B440-E9C9329CE8EC}", m_sInstanceName),
						StateInitialData(BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ_ON5, BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_BUZZ, 0, false, "BuzzerController_BuzzerControllerStateMachine_buzz_on5", "{D2C51E3B-E59C-447e-AF56-A4DBDE14EE17}", m_sInstanceName)
					};
		
				m_StateMachineImpl->CreateStateObjects(initialDataArray, nArrayCount, submachineState);
			}
			for(int i = 0; i < nEntryCount; i++)
			{
				switch(entryArray[i])
				{
				case BuzzerController_ENUM_BUZZERCONTROLLERSTATEMACHINE_INITIAL_59:
					TransitionProc(BuzzerController_ENUM_INITIAL_59__TO__STANDBY_40, signal, submachineState);
					break;
				}
			}
			if(submachineState->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
			break;
	}
}

String BuzzerController::GetInstanceName()
{
	return m_sInstanceName;
}

String BuzzerController::GetTypeName()
{
	return m_sType;
}







/* End - EA generated code for StateMachine */