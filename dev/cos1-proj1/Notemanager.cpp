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
	}

	bool NoteManager::SaveToFile(std::string filename) {
		std::ofstream outFile(filename);

		if (!outFile) {
			std::cerr << "Error: could not open " << filename << " for writing.\n";
			return false;
		}
		for (const Note& note : notes) {
			outFile << note.GetId() << "|" << note.GetTitle() << "|" << note.GetContent() << "|" << note.GetCategory() << "|" << note.GetLobeAssociation() << "\n";

		}
		outFile.close();
		std::cout << "\nSaved " << notes.size() << " notes to " << filename << "\n";
		
			return true;
	}
		
	
	bool NoteManager::LoadFromFile(std::string filename) {
		std::ifstream inFile(filename);
		if (!inFile) {
			std::cerr << "Error: could not open " << filename << " for reading. \n";
			return false;
		}
		notes.clear();
		std::string line;

		while (std::getline(inFile, line)) {
			if (line.empty()) continue;

			std::stringstream ss(line);
			std::string token;
			std::vector<std::string> fields;

			while (std::getline(ss, token, '|')) {
				fields.push_back(token);
			}
			if (fields.size() < 5) {
				std::cerr << "Warning: skipping malformed line.\n";
				continue;
			}

			std::string title = fields[1];
			std::string content = fields[2];
			std::string category = fields[3];
			int lobe = std::stoi(fields[4]);

			Note loadedNote(title, content, category, lobe);
			notes.push_back(loadedNote);
		}

			inFile.close();
			std::cout << "\nLoaded " << notes.size() << " notes from " << filename << "\n";
			return true;
		}
		