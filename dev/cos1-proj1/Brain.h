#pragma once
#include <string>

class Brain
{
private:
	// private accessibility inside class for each of the lobes, own data members
	int lobe1Count; 
	int lobe2Count;
	int lobe3Count;

	// lobes std:strings 
	std::string dominantLobe1;
	std::string cognitiveLobe2;
	std::string neuralLobe3;

public: // accessibility outside the class
	Brain(); // declaire default 

	// overloaded constructor
	Brain(int dominantLobe1, std::string cognitiveLobe2, std::string neuralLobe3);

	// accessor methods returns, do not change objects
	int GetLobe1Count() const;
	

};

