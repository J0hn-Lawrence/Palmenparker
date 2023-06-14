#include "EventProxy.h"


using namespace std;
template <typename T>
T StringToNumber ( const String &Text )
{
	StringStream ss(Text);
	T result;
	return ss >> result ? result : 0;
}



void ReleaseSignal(Signal* signal)
{
	if(signal)
	{
		signal->nReferenceCount--;
		if(signal->nReferenceCount <= 0)
			delete signal;
	}		
}

void AddSignalReference(Signal* signal)
{
	if(signal)
	{
		signal->nReferenceCount++;
	}
}

void ReleaseEvent(Event* event)
{
	if(event)
	{
		event->nReferenceCount--;
		if(event->nReferenceCount <= 0)
			delete event;
	}
}

void AddEventReference(Event* event)
{
	if(event)
	{
		event->nReferenceCount++;
	}
}

Event::Event(EventEnum eventEnum_, Signal* signal_)
{
	nReferenceCount = 0;
	
	eventEnum = eventEnum_;
	signal = signal_;
	
	AddSignalReference(signal);
}

Event::~Event()
{
	ReleaseSignal(signal);
}

Signal* GetSignalInstance( String signalStr, std::vector<String>& arguments)
{
	Signal* signal = NULL;
	while(true)
	{
	
		break;
	}
	return signal;
}

StringTable::StringTable()
{
	
}
StringTable StringTable::stringTable;