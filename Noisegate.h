#pragma once

#include <cstdint>
#include <cmath>
#include"Processor.h"

class NoiseGate : public Processor
{
public:

	NoiseGate();

	NoiseGate(double amplitude);

	double getAmp();

	void setAmp(double amplitude);
  
	virtual ~NoiseGate();
private:
	double amplitude;
};
