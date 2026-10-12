#include <iostream>
#include "Brain.h"
#include <string>


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
	std::string result = "";
	// starting with empty string, and building string concat
	result += "=== Notekeeper State ===\n";
	result += "Dominant Note (Active):" + std::to_string(lobe1Count) + " active note thoughts\n";
	result += " Parttern: " + dominantLobe1 + "\n";
	result += "Cognitive Note (Memory):" + std::to_string(lobe2Count) + " memory notes stored\n";
	result += " Status: " + cognitiveLobe2 + "\n";
	result += "Neural Note (Connections):" + std::to_string(lobe1Count) + " links\n";
	result += " Map: " + neuralLobe3 + "\n";
	result += "=========================\n";
	return result;
}
// mutators setters for lobe
void Brain::SetLobe1Count(int newCount) {
	if (newCount >= 0) {
		lobe1Count = newCount;
	}
	else {
		std::cerr << "Error: This lobe cannot be negative." << std::endl;
	}
}
void Brain::SetLobe2State(std::string newMap) {
	if (!newMap.empty()) {
		neuralLobe3 = newMap;
	}
}
