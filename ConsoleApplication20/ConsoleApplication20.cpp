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

};

int main()
{
    
}
