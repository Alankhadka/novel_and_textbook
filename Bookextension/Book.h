#include <iostream>
#include "Author.h"

using namespace std;

class Book{
private:
    string bookName;
    Author authorName;
    float bookPrice;
    int bookQuantity;

public:
    Book(string book_name, Author author_name, float price);
    Book(string book_name, Author author_name, float price, int quantity);
    void setBookPrice(float price);
    void setBookQuantity(int quantity);
    string getBookName();

    float getBookPrice();
    int getBookQuantity();
    string toString();
};
