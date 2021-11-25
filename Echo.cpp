/*
 * Authors: Amaan Sidhu, Andre Lou, Thomas Caneday
 * Date: Nov 25, 2021
 * Assignment: Semester Project
*/

#include <string>
#include <iostream>
#include "Echo.h"
#include "Wav.h"
#include "Processor.h"
Echo::Echo()
{

}
Echo::Echo(int delay) : delay(delay)
{
	
}
Echo::~Echo()
{
	
}
void Echo::setDelay(int newDelay)
{
	delay = newDelay;
}
int Echo::getDelay()
{
	return delay;
}
