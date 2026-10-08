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
    int choice = DisplayMainMenu();
}
