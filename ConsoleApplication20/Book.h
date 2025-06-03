#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
    std::string name;
    std::string author;
    std::string genre;
    int realiseYear;
    int pagesQuantity;
    bool collectionEdition;

public:
    // Конструктор по умолчанию
    Book();

    // Конструктор с параметрами
    Book(const std::string& name, const std::string& author, const std::string& genre, int realiseYear, int pagesQuantity, bool collectionEdition);

    // Сеттеры
    void setName(const std::string& name_s);
    void setAuthor(const std::string& author_s);
    void setGenre(const std::string& genre_s);
    void setRealiseYear(int realiseYear_s);
    void setPagesQuantity(int pagesQuantity_s);
    void setCollectionEdition(bool collectionEdition_s);

    // Геттеры
    std::string getName() const;
    std::string getAuthor() const;
    std::string getGenre() const;
    int getRealiseYear() const;
    int getPagesQuantity() const;
    bool getCollectionEdition() const;

    // Метод для вывода информации о книге
    void printBook() const;
};

#endif // BOOK_H
