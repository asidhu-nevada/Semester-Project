
#include <iostream>
#include "Echo.h"
#include "Noisegate.h"
#include "Normalization.h"
#include "Wav.h"

std::string getFileName()
{
    std::string file_name; //Name of the file without the .wav extension
    std::cout << "Enter the file name (with .wav extension)" << std::endl;
    std::cin >> file_name;
    return file_name;
}

int getAmount()
{
	int amount = 0;
	std::cout << "How many modifications would you like to make?" << std::endl;
	std::cin >> amount;
	return amount;
}

int getMenuChoice()
{
	int choice = 0;
	std::cout << "\nAUDIO MENU\n 1. Modify Metadata\n 2. Process File\n 3. Display File Information\n 4. Export CSV File\n 5. Save As\n 0. End Program\n\n";
	std::cin >> choice;
	return choice;
}

int getProcessorChoice()
{
	int choice = 0;
	std::cout << "\nSELECT A PROCESSOR\n 1. Echo\n 2. Noise Gate\n 3. Normalize\n 0. Stop Modifying\n\n";
	std::cin >> choice;
	return choice;
}

std::string promptForString(const std::string &prompt_text)
{
	std::string result;
	do
	{
		std::cout << prompt_text << std::endl;
		std::cin >> result;	
	} while (result.empty());
	return result;
}
