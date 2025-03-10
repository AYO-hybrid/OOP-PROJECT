#ifndef BOOK_ITEM_H
#define BOOK_ITEM_H
#include "library_item.h"
class BookItem : public LibraryItem {
private:
std::string author;
std::string isbn;

public:
BookItem(std::string& title,std::string& author,std::string& isbn){};

    std::string getAuthor() const{};
    std::string getISBN() const{};

    void setAuthor(const std::string& author){};
    void setISBN(const std::string& isbn){};

    void printDetails() const{};
    double calculateLateFees(int daysOverdue) const{};
};

#endif