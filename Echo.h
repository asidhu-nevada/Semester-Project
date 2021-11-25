#pragma once

#include "Processor.h"
#include <cstdint>
#include <cmath>

class Echo: public Processor {	   
public:
	int delay;
	Echo();
	int getDelay();
	virtual ~Echo();
	void setDelay(int newDelay);
};
