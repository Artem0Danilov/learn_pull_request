#include "Book.h"
#include <iostream>

// Конструктор по умолчанию
Book::Book()
    : name("No name"), author("Unknown author"), genre("No genre"),
    realiseYear(0), pagesQuantity(0), collectionEdition(false) {
}

// Конструктор с параметрами
Book::Book(const std::string& name, const std::string& author, const std::string& genre,
    int realiseYear, int pagesQuantity, bool collectionEdition)
    : name(name), author(author), genre(genre),
    realiseYear(realiseYear), pagesQuantity(pagesQuantity),
    collectionEdition(collectionEdition) {
}

// Сеттеры
void Book::setName(const std::string& name_s) {
    name = name_s;
}

void Book::setAuthor(const std::string& author_s) {
    author = author_s;
}

void Book::setGenre(const std::string& genre_s) {
    genre = genre_s;
}

void Book::setRealiseYear(int realiseYear_s) {
    realiseYear = realiseYear_s;
}

void Book::setPagesQuantity(int pagesQuantity_s) {
    pagesQuantity = pagesQuantity_s;
}

void Book::setCollectionEdition(bool collectionEdition_s) {
    collectionEdition = collectionEdition_s;
}

// Геттеры
std::string Book::getName() const {
    return name;
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getGenre() const {
    return genre;
}

int Book::getRealiseYear() const {
    return realiseYear;
}

int Book::getPagesQuantity() const {
    return pagesQuantity;
}

bool Book::getCollectionEdition() const {
    return collectionEdition;
}

// Метод для вывода информации о книге
void Book::printBook() const {
    std::cout << "Book name: " << getName() << std::endl;
    std::cout << "Book author: " << getAuthor() << std::endl;
    std::cout << "Book genre: " << getGenre() << std::endl;
    std::cout << "Book realiseYear: " << getRealiseYear() << std::endl;
    std::cout << "Book pagesQuantity: " << getPagesQuantity() << std::endl;

    if (getCollectionEdition()) {
        std::cout << "Is this book collection edition: YES" << std::endl;
    }
    else {
        std::cout << "Is this book collection edition: NO" << std::endl;
    }
}
