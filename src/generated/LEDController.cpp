///////////////////////////////////////////////////////////
//  LEDController.cpp
//  Implementation of the Class LEDController
//  Created on:      14-Jun-2023 16:57:12
//  Original author: pflue
///////////////////////////////////////////////////////////

#include "LEDController.h"

using namespace std;



LEDController::LEDController(LED[] leds){

}


void LEDController::setLEDs(int intervall){

	for (int i = 0; i < intervall; i++){
	leds[i-1].setOn();
	}
	for (int i = intervall; i < 5; i++){
	leds[i-1].setOff();
	}
}


/* Begin - EA generated code for StateMachine */








LEDController::LEDController()
{
	m_StateMachineImpl = NULL;
}

LEDController::LEDController(ContextManager* pManager, String sInstanceName)
{
	//Initialize Region Variables
	m_ledcontrollerstatemachine = NOSTATE;
	m_ledcontrollerstatemachine = NOSTATE;
    m_sInstanceName = sInstanceName;
    m_sType = "LEDController";
	m_StateMachineImpl = new StateMachineImpl(this, pManager);
}

LEDController::~LEDController()
{
	if (m_StateMachineImpl)
	{
		delete m_StateMachineImpl;
	}
}

bool LEDController::defer(Event* event, StateData* toState)
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


void LEDController::TransitionProc(TransitionEnum transition, Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	switch (transition) {
		case LEDController_ENUM_INITIAL_26__TO__FINAL_27_17:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "LEDController_Initial_26__TO__Final_27_17", "{15AEAD48-5008-4f77-AED0-05237D003649}", m_sInstanceName);
			Initial_26__TO__Final_27_17(signal, submachineState); 
			break;

		case LEDController_ENUM_LOOPOFF__TO__FINAL_57_37:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "LEDController_loopOff__TO__Final_57_37", "{13A8C3F8-1C52-4439-AC1B-AA93294E04BC}", m_sInstanceName);
			loopOff__TO__Final_57_37(signal, submachineState); 
			break;

		case LEDController_ENUM_INITIAL_53__TO__STANDBY_34:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "LEDController_Initial_53__TO__Standby_34", "{1717EA7D-D346-4e27-8E8B-D74416FA48A8}", m_sInstanceName);
			Initial_53__TO__Standby_34(signal, submachineState); 
			break;

		case LEDController_ENUM_LOOPON__TO__LOOPOFF_36:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "LEDController_loopOn__TO__loopOff_36", "{59FDB14C-B80A-422e-B24E-AC0CB9162C0A}", m_sInstanceName);
			loopOn__TO__loopOff_36(signal, submachineState); 
			break;

		case LEDController_ENUM_STANDBY__TO__LOOPON_35:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "LEDController_Standby__TO__loopOn_35", "{89EEC10B-8EAB-4e0d-8883-8B255B084DEE}", m_sInstanceName);
			Standby__TO__loopOn_35(signal, submachineState); 
			break;

		case LEDController_ENUM_LOOPOFF__TO__LOOPOFF_39:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "LEDController_loopOff__TO__loopOff_39", "{D28806EC-5956-4203-A22C-7A75F46DB19B}", m_sInstanceName);
			loopOff__TO__loopOff_39(signal, submachineState); 
			break;

		case LEDController_ENUM_LOOPON__TO__LOOPON_38:
			m_StateMachineImpl->currentTransition.SetTransition(transition, submachineState, "LEDController_loopOn__TO__loopOn_38", "{E325E048-19C0-4d32-94F5-9C5E4CBA4449}", m_sInstanceName);
			loopOn__TO__loopOn_38(signal, submachineState); 
			break;
	}
	m_StateMachineImpl->currentTransition.SetTransition(NOTRANSITION, NULL, "NOTRANSITION", "", "");
}

void LEDController::Initial_26__TO__Final_27_17_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_26__TO__Final_27_17 " << endl;
	GlobalFuncs::trace(ss.str());
	
	setLEDs(int();

}

void LEDController::Initial_26__TO__Final_27_17(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(submachineState)
		submachineState->IncrementActiveCount();
	Initial_26__TO__Final_27_17_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_27, submachineState, ENTRY, 0);
}

void LEDController::loopOff__TO__Final_57_37_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "loopOff__TO__Final_57_37 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void LEDController::loopOff__TO__Final_57_37(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF)->IsActiveState())
	{
		return;
	}
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF, submachineState, EXIT, 0);
	loopOff__TO__Final_57_37_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_57, submachineState, ENTRY, 0);
}

void LEDController::Initial_53__TO__Standby_34_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Initial_53__TO__Standby_34 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void LEDController::Initial_53__TO__Standby_34(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(submachineState)
		submachineState->IncrementActiveCount();
	Initial_53__TO__Standby_34_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY, submachineState, ENTRY, signal, DefaultEntry);
}

void LEDController::loopOn__TO__loopOff_36_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "loopOn__TO__loopOff_36 " << endl;
	GlobalFuncs::trace(ss.str());
	
}

void LEDController::loopOn__TO__loopOff_36(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON)->IsActiveState())
	{
		return;
	}
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON, submachineState, EXIT, 0);
	loopOn__TO__loopOff_36_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF, submachineState, ENTRY, signal, DefaultEntry);
}

void LEDController::Standby__TO__loopOn_35_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "Standby__TO__loopOn_35 " << endl;
	GlobalFuncs::trace(ss.str());
	
	int i = 0;

}

void LEDController::Standby__TO__loopOn_35(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY)->IsActiveState())
	{
		return;
	}
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY, submachineState, EXIT, 0);
	Standby__TO__loopOn_35_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON, submachineState, ENTRY, signal, DefaultEntry);
}

void LEDController::loopOff__TO__loopOff_39_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "loopOff__TO__loopOff_39 " << endl;
	GlobalFuncs::trace(ss.str());
	
	leds[i-1].setOff();
	i++;

}

void LEDController::loopOff__TO__loopOff_39(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF)->IsActiveState())
	{
		return;
	}
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF, submachineState, EXIT, 0);
	loopOff__TO__loopOff_39_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF, submachineState, ENTRY, signal, DefaultEntry);
}

void LEDController::loopOn__TO__loopOn_38_effect(Signal* signal)
{
	StringStream ss;
	ss << "[" << m_sInstanceName << ":" << m_sType << "] Transition Effect: " << "loopOn__TO__loopOn_38 " << endl;
	GlobalFuncs::trace(ss.str());
	
	leds[i-1].setOn();
	i++;

}

void LEDController::loopOn__TO__loopOn_38(Signal* signal, StateData* submachineState) 
{
	if (!m_StateMachineImpl)
		return;
	
	if(!m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON)->IsActiveState())
	{
		return;
	}
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON, submachineState, EXIT, 0);
	loopOn__TO__loopOn_38_effect(signal);
	m_StateMachineImpl->currentTransition.SetActive(m_StateMachineImpl);
	StateProc(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON, submachineState, ENTRY, signal, DefaultEntry);
}

bool LEDController::StateProc(int state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, int entryArray[], int nArrayCount) 
{
	EntryEnum entryEnumArray[MAX_STATES];
	for(int i = 0; i < nArrayCount; i++)
	{
		entryEnumArray[i] = (EntryEnum)entryArray[i];
	}
	
	return StateProc((StateEnum)state, submachineState, behavior, signal, enumEntryType, entryEnumArray, nArrayCount);
}
bool LEDController::StateProc(StateEnum state, StateData* submachineState, StateBehaviorEnum behavior, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount) 
{
	switch (state) {
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_27:
			return LEDControllerStateMachine_Final_27(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_57:
			return LEDControllerStateMachine_Final_57(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF:
			return LEDControllerStateMachine_loopOff(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON:
			return LEDControllerStateMachine_loopOn(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);

		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY:
			return LEDControllerStateMachine_Standby(behavior, submachineState, signal, enumEntryType, entryArray, nArrayCount);
	}
	return false;
}

bool LEDController::LEDControllerStateMachine_Final_27(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	
	if(submachineState)
		submachineState->DecrementActiveCount();
	if(submachineState->IsActiveState())
		m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
	
	return true;
}


bool LEDController::LEDControllerStateMachine_Final_57(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	
	if(submachineState)
		submachineState->DecrementActiveCount();
	if(submachineState->IsActiveState())
		m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
	
	return true;
}


bool LEDController::LEDControllerStateMachine_loopOff(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_ledcontrollerstatemachine = LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF;
			state->IncrementActiveCount();
			LEDControllerStateMachine_loopOff_behavior(ENTRY, signal);
			
			LEDControllerStateMachine_loopOff_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_ledcontrollerstatemachine = NOSTATE;
			state->DecrementActiveCount();
			LEDControllerStateMachine_loopOff_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool LEDController::LEDControllerStateMachine_loopOff_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "LEDControllerStateMachine_loopOff " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "LEDControllerStateMachine_loopOff " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "LEDControllerStateMachine_loopOff " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool LEDController::LEDControllerStateMachine_loopOn(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_ledcontrollerstatemachine = LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON;
			state->IncrementActiveCount();
			LEDControllerStateMachine_loopOn_behavior(ENTRY, signal);
			
			LEDControllerStateMachine_loopOn_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_ledcontrollerstatemachine = NOSTATE;
			state->DecrementActiveCount();
			LEDControllerStateMachine_loopOn_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool LEDController::LEDControllerStateMachine_loopOn_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "LEDControllerStateMachine_loopOn " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "LEDControllerStateMachine_loopOn " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "LEDControllerStateMachine_loopOn " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool LEDController::LEDControllerStateMachine_Standby(StateBehaviorEnum behavior, StateData* submachineState, Signal* signal, EntryTypeEnum enumEntryType, EntryEnum entryArray[], int nArrayCount)
{
	if (!m_StateMachineImpl)
		return false;
	
	StateData*  state = m_StateMachineImpl->GetStateObject(submachineState, LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY);
	switch (behavior) {
		case ENTRY:
			if(state->active_count > 0)
				return false;
			m_ledcontrollerstatemachine = LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY;
			state->IncrementActiveCount();
			LEDControllerStateMachine_Standby_behavior(ENTRY, signal);
			
			LEDControllerStateMachine_Standby_behavior(DO, signal);
			if((enumEntryType == EntryPointEntry || enumEntryType == DefaultEntry) && state->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, state);
			break;
		case EXIT:
			if(state->active_count == 0)
				return false;
			m_ledcontrollerstatemachine = NOSTATE;
			state->DecrementActiveCount();
			LEDControllerStateMachine_Standby_behavior(EXIT, signal);
			m_StateMachineImpl->removeInternalEvent(state);
			break;
	}
	
	return true;
}

bool LEDController::LEDControllerStateMachine_Standby_behavior(StateBehaviorEnum behavior, Signal* signal) 
{
	switch (behavior) {
		case ENTRY:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Entry Behavior: " << "LEDControllerStateMachine_Standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case DO:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Do Behavior: " << "LEDControllerStateMachine_Standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
		case EXIT:
		{
			StringStream ss;
			ss << "[" << m_sInstanceName << ":" << m_sType << "] Exit Behavior: " << "LEDControllerStateMachine_Standby " << endl;
			GlobalFuncs::trace(ss.str());
		}
			break;
	}
	
	return true;
}

bool LEDController::dispatch(Event* event, StateData* toState, bool bCheckOnly) 
{
	if (!m_StateMachineImpl)
		return false;
	
	bool bDispatched = false;
	
	if(!toState || !toState->IsActiveState() && !bCheckOnly)
		return bDispatched;
	
	switch (toState->state_enum) {
		case LEDController_VIRTUAL_SUBMACHINESTATE:
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
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(i == 5) {
						if(!bCheckOnly)
							TransitionProc(LEDController_ENUM_LOOPOFF__TO__FINAL_57_37, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					if(i<5) {
						if(!bCheckOnly)
							TransitionProc(LEDController_ENUM_LOOPOFF__TO__LOOPOFF_39, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON:
			switch (event->eventEnum) {
		
				case COMPLETION:
					if(i < intervall) {
						if(!bCheckOnly)
							TransitionProc(LEDController_ENUM_LOOPON__TO__LOOPON_38, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					if(true) {
						if(!bCheckOnly)
							TransitionProc(LEDController_ENUM_LOOPON__TO__LOOPOFF_36, 0, toState->submachine_state);
						bDispatched = true;
						break;
					}
					break;
		
			}
			break;
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY:
			switch (event->eventEnum) {
				case ENUM_SETLEDS(INT):
					if(true) {
						if(!bCheckOnly)
							TransitionProc(LEDController_ENUM_STANDBY__TO__LOOPON_35, event->signal, toState->submachine_state);
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

void LEDController::runStateMachine(StateMachineEnum statemachine) 
{
	if (!m_StateMachineImpl)
		return;
	
	list<StateData*> activeStateArray;
	if(m_StateMachineImpl->GetCurrentStates(activeStateArray) > 0)
		return;
	
	switch (statemachine) {
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE:
			{
				const int nArrayCount = 1;
				EntryEnum entryArray[nArrayCount] = {LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_INITIAL_26};
				runStateMachine(statemachine, NULL, 0, entryArray, nArrayCount);	//submachineState is NULL if run standalone statemachine 
			}
			break;
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE:
			{
				const int nArrayCount = 1;
				EntryEnum entryArray[nArrayCount] = {LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_INITIAL_53};
				runStateMachine(statemachine, NULL, 0, entryArray, nArrayCount);	//submachineState is NULL if run standalone statemachine 
			}
			break;
	}
}

void LEDController::runStateMachines()
{
	runStateMachine(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE);
	runStateMachine(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE);
}

void LEDController::runStateMachine(String statemachine)
{
	if(statemachine == "LEDController_LEDControllerStateMachine")
	{
		runStateMachine(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE);
		return;
	}
	if(statemachine == "LEDController_LEDControllerStateMachine")
	{
		runStateMachine(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE);
		return;
	}
}

void LEDController::runStateMachine(StateMachineEnum statemachine, StateData* submachineState, Signal* signal, EntryEnum entryArray[], int nEntryCount) 
{
	if(!submachineState)
	{
		StateInitialData initialData(LEDController_VIRTUAL_SUBMACHINESTATE, NOSTATE, 1, false, "LEDController_VIRTUAL_SUBMACHINESTATE", "", ""); 
		submachineState = new StateData(m_StateMachineImpl, &initialData);
		
		submachineState->IncrementActiveCount();
		m_StateMachineImpl->lstStateData.push_back(submachineState);
	}
	switch (statemachine) {
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE:
			{
				const int nArrayCount = 1;
				StateInitialData initialDataArray[nArrayCount] = 
					{
						StateInitialData(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_27, NOSTATE, 0, false, "LEDController_LEDControllerStateMachine_Final_27", "{A79D598D-D670-491e-A383-2B55C2AFC29B}", m_sInstanceName)
					};
		
				m_StateMachineImpl->CreateStateObjects(initialDataArray, nArrayCount, submachineState);
			}
			for(int i = 0; i < nEntryCount; i++)
			{
				switch(entryArray[i])
				{
				case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_INITIAL_26:
					TransitionProc(LEDController_ENUM_INITIAL_26__TO__FINAL_27_17, signal, submachineState);
					break;
				}
			}
			if(submachineState->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
			break;
		case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE:
			{
				const int nArrayCount = 4;
				StateInitialData initialDataArray[nArrayCount] = 
					{
						StateInitialData(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_FINAL_57, NOSTATE, 0, false, "LEDController_LEDControllerStateMachine_Final_57", "{8783CD13-CA1F-4f7d-A3F6-807B3BBD6C21}", m_sInstanceName),
						StateInitialData(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPOFF, NOSTATE, 0, false, "LEDController_LEDControllerStateMachine_loopOff", "{7640C3E5-1C21-4b40-9449-D46DCE127D10}", m_sInstanceName),
						StateInitialData(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_LOOPON, NOSTATE, 0, false, "LEDController_LEDControllerStateMachine_loopOn", "{05ADAB16-E6A6-4e96-9B3A-40D3FD9EF7F3}", m_sInstanceName),
						StateInitialData(LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_STANDBY, NOSTATE, 0, false, "LEDController_LEDControllerStateMachine_Standby", "{4B1C9EB0-42B8-43c6-8FFD-8370663B9CDA}", m_sInstanceName)
					};
		
				m_StateMachineImpl->CreateStateObjects(initialDataArray, nArrayCount, submachineState);
			}
			for(int i = 0; i < nEntryCount; i++)
			{
				switch(entryArray[i])
				{
				case LEDController_ENUM_LEDCONTROLLERSTATEMACHINE_INITIAL_53:
					TransitionProc(LEDController_ENUM_INITIAL_53__TO__STANDBY_34, signal, submachineState);
					break;
				}
			}
			if(submachineState->IsActiveState())
				m_StateMachineImpl->deferInternalEvent(COMPLETION, 0, submachineState);
			break;
	}
}

String LEDController::GetInstanceName()
{
	return m_sInstanceName;
}

String LEDController::GetTypeName()
{
	return m_sType;
}







/* End - EA generated code for StateMachine */