#include <fstream>
#include <iostream>
#include <string>
#include "Echo.h"
#include "Noisegate.h"
#include "Normalization.h"
#include "Processor.h"
#include "Wav.h"

Normalizer::Normalizer()
{
	amplitude = 0;
}

Normalizer::Normalizer(double amplitude) : amplitude(amplitude)
{
	
}

Normalizer::~Normalizer()
{
	
}
double Normalizer::getAmp(){
	return amplitude;
}

void Normalizer::setAmp(double nAmplitude){
	amplitude = nAmplitude;
}
