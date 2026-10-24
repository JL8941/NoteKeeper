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
	bool NoteManager::DeleteNote(int noteId) {
		for (size_t i = 0; i < notes.size(); i++) {
			if (notes[i].GetId() == noteId) {
				notes.erase(notes.begin() + i);
				return true;
			}
		}
		return false;
	}// find the note by id 
	Note* NoteManager::FindNoteById(int noteId) {
		for (size_t i = 0; i < notes.size(); i++) {
			if (notes[i].GetId() == noteId) {
				return &notes[i];
			}
		}
		return nullptr;
	} // getting all notes
	std::vector<Note> NoteManager::GetAllNotes() const {
		return notes;
	}
	std::vector<Note> NoteManager::GetNotesByLobe(int lobeNum) const {
		std::vector<Note> filtered;
		for (const Note& note : notes) {
			if (note.GetLobeAssociation() == lobeNum) {
				filtered.push_back(note);
			}
		}
		return filtered;
	} //getting note count
	int NoteManager::GetNoteCount() const {
		return static_cast<int>(notes.size());
	}
	void NoteManager::PrintNoteSummary() {
		if (notes.empty()) {
			std::cout << "\nNo notes yet stored.\n";
			return;
		}
		std::cout << "\nTotal Notes: " << notes.size() << "\n";

		for (const Note& note : notes) {
			std::cout << note.GetFullNote();
		}

		bool NoteManager::SaveToFile(std::string filename) {
			std::ofstream outFile(filename);

		}
	}
	