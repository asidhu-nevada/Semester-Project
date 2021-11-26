#pragma once

#include <cstdint>
#include <cmath>
#include"Processor.h"


class Normalizer : public Processor
{
public:

	Normalizer();

	Normalizer(double amplitude);

	double getAmp();

	void setAmp(double amplitude);

	virtual ~Normalizer();
private:
	double amplitude;
};
