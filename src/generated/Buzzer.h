///////////////////////////////////////////////////////////
//  Buzzer.h
//  Implementation of the Class Buzzer
//  Created on:      14-Jun-2023 16:57:07
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_09513BF6_D1B0_4033_9CD0_74161952545D__INCLUDED_)
#define EA_09513BF6_D1B0_4033_9CD0_74161952545D__INCLUDED_

class Buzzer
{

public:
	Buzzer();
	virtual ~Buzzer();

	Buzzer(int pin);
	void setOff();
	void setOn();

private:
	int pin;

};
#endif // !defined(EA_09513BF6_D1B0_4033_9CD0_74161952545D__INCLUDED_)
