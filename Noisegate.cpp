#include <fstream>
#include <iostream>
#include <string>
#include "Echo.h"
#include "Noisegate.h"
#include "Processor.h"
#include "Wav.h"

NoiseGate::NoiseGate()
{
    amplitude = 0;
}

NoiseGate::NoiseGate(double amplitude) : amplitude(amplitude)
{

}

NoiseGate::~NoiseGate()
{

}
double NoiseGate::getAmp(){
    return amplitude;
}

void NoiseGate::setAmp(double nAmplitude){
    amplitude = nAmplitude;
}
