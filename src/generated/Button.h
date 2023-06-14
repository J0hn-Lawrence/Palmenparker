///////////////////////////////////////////////////////////
//  Button.h
//  Implementation of the Class Button
//  Created on:      14-Jun-2023 16:57:05
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_D5E47A44_8091_49fe_9D7E_EB2A074D51CC__INCLUDED_)
#define EA_D5E47A44_8091_49fe_9D7E_EB2A074D51CC__INCLUDED_

class Button
{

public:
	Button();
	virtual ~Button();

	Button(int pin);
	void poll();

private:
	int pin;

};
#endif // !defined(EA_D5E47A44_8091_49fe_9D7E_EB2A074D51CC__INCLUDED_)
