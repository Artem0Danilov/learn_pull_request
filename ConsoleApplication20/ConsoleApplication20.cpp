#include <iostream>

class Book {
    std::string name;
    std::string author;
    std::string genre;
    int realiseYear;
    int pagesQuantity;
    bool collectionEdition;

public:

    Book() {
        name = "No name";
        author = "Unknown author";
        genre = "No genre";
        realiseYear = 0;
        pagesQuantity = 0;
        collectionEdition = false;
    }

    Book(const std::string& name, const std::string& author, const std::string& genre, int realiseYear, int pagesQuantity, bool collectionEdition)
        : name(name), author(author), genre(genre), realiseYear(realiseYear), pagesQuantity(pagesQuantity), collectionEdition(collectionEdition)
    {
    }

    void setName(std::string name_s) {
        name = name_s;
    }

    void setAuthor(std::string author_s) {
        author = author_s;
    }

    void setGenre(std::string genre_s) {
        genre = genre_s;
    }

    void setRealiseYear(int realiseYear_s) {
        realiseYear = realiseYear_s;
    }

    void setPagesQuantity(int pagesQuantity_s) {
        pagesQuantity = pagesQuantity_s;
    }

    void setCollectionEdition(bool collectionEdition_s) {
        collectionEdition = collectionEdition_s;
    }

    std::string getName() {
        return name;
    }

    std::string getAuthor() {
        return author;
    }

    std::string getGenre() {
        return genre;
    }

    int getRealiseYear() {
        return realiseYear;
    }

    int getPagesQuantity() {
        return pagesQuantity;
    }

    bool getCollectionEdition() {
        return collectionEdition;
    }

    void printBook() {
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
};

int main()
{
    Book book_1;
    book_1.printBook();
}
