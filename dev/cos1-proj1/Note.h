#pragma once
#include <string>

class Note
{
private:
	// private field for notes id
	int id;
	static int newId;

	std::string title;
	std::string content;
	std::string category;

	// id and association of which lobes is stored
	int createOrder;
	int lobeAssociation;


};

