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

public: 
	Note(); // default constructor 
	Note(std::string noteTitle, std::string noteContent, std::string noteCategory, int lobeNum);

	//accessors, mutators
	
	int GetId() const;
	std::string GetTitle() const;
	std::string GetContent() const;
	std::string GetCategory() const;
	std::string GetCreateOrder() const;
	int GetLobeAssociation() const;

	void SetTitle(std::string newTitle);
	void SetContent(std::string newContent);
	void SetCategory(std::string newCategory);
	void Set(int lobeNum);

	std::string GetFullNote();

};

