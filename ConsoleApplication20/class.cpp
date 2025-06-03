#include "class.h"

void Book::showInfo() {
	std::cout << "------------\n";
	std::cout << "Name of the book: " << name << std::endl;
	std::cout << "Name of the author: " << author << std::endl;
	std::cout << "Publish year: " << year << std::endl;
	std::cout << "Extra notes: " << notes << std::endl;
	std::cout << "------------\n";
}