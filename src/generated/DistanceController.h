///////////////////////////////////////////////////////////
//  DistanceController.h
//  Implementation of the Class DistanceController
//  Created on:      14-Jun-2023 16:57:10
//  Original author: pflue
///////////////////////////////////////////////////////////

#if !defined(EA_45F2681A_D272_4d3d_8251_DF2E21F4D7A5__INCLUDED_)
#define EA_45F2681A_D272_4d3d_8251_DF2E21F4D7A5__INCLUDED_

#include "UltrasonicSensor.h"

class DistanceController
{

public:
	DistanceController();
	virtual ~DistanceController();
	UltrasonicSensor *m_UltrasonicSensor;

	DistanceController(UltrasonicSensor[] sensors);
	int getInterval();

private:
	UltrasonicSensor[] sensors;

};
#endif // !defined(EA_45F2681A_D272_4d3d_8251_DF2E21F4D7A5__INCLUDED_)
