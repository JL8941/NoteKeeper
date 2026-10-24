// cos1-proj1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Brain.h"
#include "Note.h"
#include "NoteManager.h"

// display menu of Notekeeper system
int DisplayMainMenu() {
    std::cout << "\n[  =========================  ]\n";
    std::cout << "[--------- NoteKeeper --------]\n";
    std::cout << "[  =========================  ]\n";
    std::cout << "[    1. View Brain State      ]\n";
    std::cout << "[    2. Add New Note          ]\n";
    std::cout << "[    3. View All Notes        ]\n";
    std::cout << "[    4. Find Note by ID       ]\n";
    std::cout << "[    5. Delete Note           ]\n";
    std::cout << "[    6. Save Notes            ]\n";
    std::cout << "[    7. Load Notes            ]\n";
    std::cout << "[    8. Exit                  ]\n";
    std::cout << "[  =========================  ]\n";
    std::cout << "     Enter choice (1-8): ";

    int choice;
    std::cin >> choice;
    return choice;

}
int main()
{
    // default construct
    Brain myBrain;
    NoteManager manager(&myBrain);
    std::cout << "\n NoteKeeper: Brain-Driven Note System\n\n";
    // bool starts the loop, user selection calls function and stores the return
    bool running = true;
    while (running) {
        int choice = DisplayMainMenu();
        std::cin.ignore();

        switch (choice) {
        case 1:
            std::cout << "\n" << myBrain.GetAllNotes();
            break;


        case 2: {
            std::cout << "\n === Add New Note ===\n";
            std::cout << "Title: ";
            std::string title;
            std::getline(std::cin, title);

            std::cout << "Content: ";
            std::string content;
            std::getline(std::cin, content);

            std::cout << "Category (work/personal/idea): ";
            std::string category;
            std::getline(std::cin, category);

            std::cout << "Lobe (1/2/3)";
            int lobe;
            std::cin >> lobe;
            std::cin.ignore();
            //to create and store the notes
            Note newNote(title, content, category, lobe);
            manager.AddNote(newNote);
            break;
        }

        case 3:
            manager.PrintNoteSummary();
            break;


        case 4: {
            std::cout << "\nEnter Note to find ID:\n";
            int id;
            std::cin >> id;
            std::cin.ignore();
            Note* found = manager.FindNoteById(id);
            if (found != nullptr) {
                std::cout << found->GetFullNote();
            }
            else {
                std::cout << "\nNote not found.\n";
            }
            break;
        }
        case 5: {
            std::cout << "\nEnter note ID to delete: ";
            int id;
            std::cin >> id;
            std::cin.ignore();
            if (manager.DeleteNote(id)) {
                std::cout << "\nNote deleted.\n";
            }
            else {
                std::cout << "\nNote not found.\n";
            }
            break;
        }
        case 6: {
            std::cout << "\nSaving notes.\n";
            manager.SaveToFile("notes_save.dat");
            break;
        }
        case 7: {
            std::cout << "\nLoading notes.\n";
            manager.LoadFromFile("notes_save.dat");
            break;
        }
        case 8: {
            std::cout << "\nSee you again\n";
            running = false;
            break;
        }
        default:
            std::cout << "\nInvalid choice, try again.";
            break;
        }
    }
    return 0;
}

    
        