#include "ConsoleManager.h"
#include <time.h>
using namespace std;

ConsoleManager::ConsoleManager(){
	//setup instance associations
}

void ConsoleManager::ClearInstance(String instanceStr)
{
}

void ConsoleManager::Run()
{
	simulationStartTime = GetTickCount();	//Windows Only
	bool bContinue=true;
	RunAllStateMachines();
	while(bContinue)
	{
		//recall all completion events
		EvaluateCommandString("stepall");
		
		String in;
		getline(cin, in);
		bContinue = EvaluateCommandString(in);
	}
}

/*
int main() {
	ConsoleManager manager;
	manager.initialize();
	manager.Run();
	return 0;
}
*/