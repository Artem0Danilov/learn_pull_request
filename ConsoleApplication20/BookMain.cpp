#include <iostream>
#include "Book.h"
#include <vector>
#include <algorithm>
#include<string>

int main()
{
    std::vector<Book>library;
    Book book;

    setlocale(LC_ALL, "ru");

    while (true) {
        std::cout << "\n";
        std::cout << "Выберите номер меню:" << std::endl;
        std::cout << "Меню:" << "\n";
        std::cout << "1. Добавить книгу!" << "\n";
        std::cout << "2. Удалить книгу по названию!\n";
        std::cout << "3. Найти книгу!\n";
        std::cout << "4. Выход!\n";
        std::cout << "\n";
        std::cout << "Введите номер \n";


        int user;
        std::cin >> user;
        if (std::cin.fail() || user <= 0) {
            std::cout << "Ошибка: введите целое положительное число.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера
            std::cout << "Попробуйте снова: ";
            std::cout << "\n";
        }



        switch (user)
        {
        case 1: {
            int quantity = 0;
            std::cout << "Сколько книг хотите добавить?\n";
            std::cin >> quantity;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            for (int i = 0; i < quantity; i++) {
                std::cout << "Книга: " << (i + 1) << "\n";
                std::cout << "Название: \n";
                std::getline(std::cin, book.title_);
                std::cout << "\n";
                std::cout << "Автор: \n";
                std::getline(std::cin, book.author_);
                std::cout << "\n";
                std::cout << "Год издания: \n";
                std::cin >> book.year_;
                std::cout << "\n";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                library.push_back(book);
                infoBook(library);
            }

        }
              break;

        case 2: {
            std::cout << "Выберите книгу по названию, которую хотите удалить?\n";
            std::cout << std::endl;
            std::string user;
            std::cin >> user;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            auto it = std::find_if(library.begin(), library.end(), [&](const Book& book) {
                return book.title_ == user;
                });
            if (it != library.end()) {
                library.erase(it);
                std::cout << "Книга удалена!\n";
                std::cout << "\n";
            }
            else {
                std::cout << "Книга не найдена!\n";
                std::cout << "\n";
            }
            break;
        }
        case 3:
        {
            std::cout << "Выберите название книги, которую хотите найти? \n";
            std::cout << std::endl;
            std::string user;
            std::cin >> user;
            auto it = std::find_if(library.begin(), library.end(), [&](const Book& book) {
                return book.title_ == user;
                });
            if (it != library.end()) {
                std::cout << std::endl;
                std::cout << "Книга найдена!\n";
                infoBook(library);
            }
            else {
                std::cout << "Книга не найдена!\n";
            }
            break;
        }
        case 4:
            break;

        default:
            std::cout << "\n";
            std::cout << "Ошибка ввода!\n";
            std::cout << "\n";
            break;




        }

    }


    return 0;
}
