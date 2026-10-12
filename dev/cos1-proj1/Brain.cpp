#include <iostream>
#include "Brain.h"


Brain::Brain() {
	// lobes stores values to memory starts at 0
	lobe1Count = 0;
	lobe2Count = 0;
	lobe3Count = 0; 

	// initializing lobe strings 
	dominantLobe1 = "inactive";
	cognitiveLobe2 = "idle";
	neuralLobe3 = "disconnected";
}

Brain::Brain(int dominantLobe1, std::string cognitiveLobe2, std::string neuralLobe3)
{
	lobe1Count = dominantLobe1;
	lobe2Count = 0;
	lobe3Count = 0; 

	this->dominantLobe1 = cognitiveLobe2;
	this->cognitiveLobe2 = cognitiveLobe2;
	this->neuralLobe3 = neuralLobe3;

} // accessors from brain.h
int Brain::GetLobe1Count() const {
	return lobe1Count;
}
std::string Brain::GetLobe2State() const {
	return cognitiveLobe2;
}
std::string Brain::GetLobe3Map() const {
	return neuralLobe3;
}
std::string Brain::GetAllNotes() const {

}