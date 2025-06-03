#include "class.h"
using namespace std;
Book::Book(const string& name, const string& author, int year) : name_(name), author_(author), year_(year) {}
void Book::showinfo() const {
	cout << "Name of book: " << name_ << "\n";
	cout << "Author of book: " << author_ << "\n";
	cout << "Year of book: " << year_ << "\n";
}