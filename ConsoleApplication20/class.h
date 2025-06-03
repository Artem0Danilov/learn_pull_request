#pragma once
#include <iostream>

class Book {
private:
	std::string title_;
	std::string author_;
	int year_;
	std::string notes_;
public:
	Book(const std::string& title, const std::string& author, int year, const std::string& notes = "-");
	void showInfo()const;
	std::string title()const;
	std::string author()const;
	int year()const;
	std::string notes()const;
	void addNotes(const std::string& newNotes);
	void rewriteNotes(const std::string& newNotes);
};