#include <string>
#include "Note.h"

int Note::newId = 1;

Note::Note() {
	id = newId++;
	title = "";
}