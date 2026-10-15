#include <string>
#include "Note.h"

int Note::newId = 1;

Note::Note() {
	id = newId++;
	title = "";
	content = "";
	category = "uncategorized";
	createOrder = id;
	lobeAssociation = 0;
}
Note::Note(std::string noteTitle, std::string noteContent, std::string noteCategory, int lobeNum) {
	// make the id, and copy the parameter to the member title, content category, id create order, and associates with lobes
	id = newId++; 
	title = noteTitle;
	content = noteContent;
	category = noteCategory;
	createOrder = id;
	lobeAssociation = lobeNum;

	if (lobeNum < 1 || lobeNum > 3) {
		lobeAssociation = 1;  
	}
}