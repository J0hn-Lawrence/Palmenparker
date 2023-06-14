#pragma once
#include "ContextManager.h"
class ConsoleManager : public ContextManager
{
public:
public:
	ConsoleManager();
	void ClearInstance(String instanceStr);
	void Run();
};