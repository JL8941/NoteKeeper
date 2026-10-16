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
} // calling in the accessors and mutators, for Id, title, category, createorder
  // void mutators have title if not empty validation and assignment, and range method for lobe association
int Note::GetId() const {
	return id; 
}
std::string Note::GetTitle() const {
	return title;
}
std::string Note::GetCategory() const {
	return category;
}
std::string Note::GetCreateOrder() const {
	return "Note #" + std::to_string(createOrder);
}
int Note::GetLobeAssociation() const {
	return lobeAssociation;
}
void Note::SetTitle(std::string newTitle) {
	if (!newTitle.empty()) {
		title = newTitle;
	}
}
void Note::SetContent(std::string newContent){
	content = newContent;
	}
void Note::SetCategory(std::string newCategory) {
	if (!newCategory.empty()) {
		category = newCategory;
	}
}
void Note::SetLobeAssociation(int lobeNum) {
	if (lobeNum >= 1 && lobeNum <= 3) {
		lobeAssociation = lobeNum;
	}
}
std::string Note::GetFullNote() {
	std::string result = "";

