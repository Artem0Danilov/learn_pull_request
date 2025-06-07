#include<iostream>
#include "Book.h"
#include <vector>


Book::Book(const std::string& title, const std::string& author, int year) {
	title_ = title;
	author_ = author;
	year_ = year;
}



void infoBook(const std::vector<Book>& books)
{
	for (const auto& bo : books) {
		std::cout << bo.title_ << "   " << bo.author_ << "   " << bo.year_ << std::endl;
		std::cout << "_______________________________________________\n";
	}
}
