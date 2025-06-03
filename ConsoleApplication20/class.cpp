#include "class.h"

Book::Book(const std::string& title, const std::string& author, int year, const std::string& notes) : title_(title), author_(author), year_(year), notes_(notes) {}

void Book::showInfo() const {
	std::cout << "------------\n";
	std::cout << "Title of the book: " << title_ << std::endl;
	std::cout << "Name of the author: " << author_ << std::endl;
	std::cout << "Publish year: " << year_ << std::endl;
	std::cout << "Extra notes: " << notes_ << std::endl;
	std::cout << "------------\n";
}

std::string Book::title() const {
	return title_;
}

std::string Book::author() const {
	return author_;
}

int Book::year() const {
	return year_;
}

std::string Book::notes() const {
	return notes_;
}

void Book::addNotes(const std::string& newNotes) {
	notes_ = notes_ + " " + newNotes;
	std::cout << "Changed! Notes for this book are now: " << notes_ << std::endl;
}

void Book::rewriteNotes(const std::string& newNotes) {
	notes_ = newNotes;
	std::cout << "Changed! Notes for this book are now: " << notes_ << std::endl;
}
