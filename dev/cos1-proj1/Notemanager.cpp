#include "Notemanager.h"
#include <iostream>
#include <fstream>
#include <sstream>

// default constructor and nullptr 
NoteManager::NoteManager() {
	brainPtr = nullptr;
	// default filename
	saveFileName = "notes_save.dat";
}

	NoteManager::NoteManager(Brain* associatedBrain)
	{
		brainPtr = associatedBrain;
		saveFileName = "notes_save.dat";

	}
	// new notes to push
	void NoteManager::AddNote(Note newNote) {
		notes.push_back(newNote);
	
		if (brainPtr != nullptr) {
			brainPtr->ActivateAllLobes();
		}
	}