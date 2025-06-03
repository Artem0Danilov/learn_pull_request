#pragma once
#include <iostream>

class Book {
private:
	std::string name;
	std::string author;
	int year;
	std::string notes;
public:
	Book(std::string name, std::string author, int year, std::string notes)
		: name(name), author(author), year(year), notes(notes){}
	void showInfo();
	void changeNotes(std::string newNotes);
};