#include "class.h"

void Book::showInfo() {
	std::cout << "------------\n";
	std::cout << "Name of the book: " << name << std::endl;
	std::cout << "Name of the author: " << author << std::endl;
	std::cout << "Publish year: " << year << std::endl;
	std::cout << "Extra notes: " << notes << std::endl;
	std::cout << "------------\n";
}

void Book::changeNotes(std::string newNotes) {
	int userChoice;
	std::cout << "How do you want to change the notes?\n";
	std::cout << "1. Add notes\n";
	std::cout << "2. Rewrite notes\n";
	std::cout << "3. Delete notes\n";
	std::cout << ">>> ";
	std::cin >> userChoice;
	if (userChoice == 1) {
		notes = notes + " " + newNotes;
		std::cout << "Changed! Notes for this book are now: " << notes << std::endl;
	}
	else if (userChoice == 2) {
		notes = newNotes;
		std::cout << "Changed! Notes for this book are now: " << notes << std::endl;
	}
	else if (userChoice == 3) {
		notes = "-";
		std::cout << "Changed! Notes for this book are now: " << notes << std::endl;
	}
	else {
		std::cout << "Error: unknown number.\n";
	}

}
