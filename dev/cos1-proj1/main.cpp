// cos1-proj1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Brain.h"

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
    

    std::cout << "\n NoteKeeper: Brain-Driven Note System\n\n";
    // bool starts the loop, user selection calls function and stores the return
    bool running = true;
    while (running) { 
        int choice = DisplayMainMenu();

        switch (choice) {
        case 1:
            std::cout << "\n" << myBrain.GetAllNotes();
            break;
        case 2: {
            std::cout << "\n === Add New Note ===\n";
            std::cout << "Title: ";
            std::string title;
            std::cin.ignore();
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
            break;
            // create and store the notes
            
        }
        }
    }
}
