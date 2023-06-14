///////////////////////////////////////////////////////////
//  LED.h
//  Implementation of the Class LED
//  Created on:      14-Jun-2023 16:57:11
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_BFE211C0_83FA_4df8_BAF1_70ABA422CA59__INCLUDED_)
#define EA_BFE211C0_83FA_4df8_BAF1_70ABA422CA59__INCLUDED_

class LED
{

public:
	LED();
	virtual ~LED();

	LED(int pin);
	void setOff();
	void setOn();

private:
	int pin;

};
#endif // !defined(EA_BFE211C0_83FA_4df8_BAF1_70ABA422CA59__INCLUDED_)
