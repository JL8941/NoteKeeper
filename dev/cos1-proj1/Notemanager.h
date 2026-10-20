#pragma once
#include "Note.h"
#include "Brain.h"
#include <vector>
#include <string>
class NoteManager
{ // vector of note objects, brain object pointer
	std::vector<Note> notes;
	Brain* brainPtr;

	std::string saveFileName;
public:  // Default and overload constructors
	NoteManager(); 

	NoteManager(Brain* associatedBrain);
	// add note to collection, delete note by the id
	void AddNote(Note newNote);
	bool DeleteNote(int noteId);

	Note* FindNoteById(int noteId);
	std::vector<Note> GetAllNotes() const; 
	// vectors to ocpy and filter by lobes
	std::vector<Note> GetNotesByLobe(int lobeNum) const;

	int GetNoteCount() const; // counts how many notes

	void PrintNoteSummary();  // display all the notes
};

