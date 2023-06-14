///////////////////////////////////////////////////////////
//  UltrasonicSensor.h
//  Implementation of the Class UltrasonicSensor
//  Created on:      14-Jun-2023 16:57:15
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_5D8DE9D3_4368_42c9_BB1C_5A01D1A299F8__INCLUDED_)
#define EA_5D8DE9D3_4368_42c9_BB1C_5A01D1A299F8__INCLUDED_

class UltrasonicSensor
{

public:
	UltrasonicSensor();
	virtual ~UltrasonicSensor();

	UltrasonicSensor(int pin);
	double getMesuredValue();

private:
	int pin;

};
#endif // !defined(EA_5D8DE9D3_4368_42c9_BB1C_5A01D1A299F8__INCLUDED_)
