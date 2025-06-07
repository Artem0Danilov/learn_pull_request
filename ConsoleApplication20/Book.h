#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
#include <vector>


struct Book {

	std::string title_;
	std::string author_;
	int year_;
public:

	Book() = default;

	Book(const std::string& title, const std::string& author, int year = 0);
};




void deleteBook(Book& books);
void infoBook(const std::vector<Book>& books);





#endif 
