// #include<iostream>
// using namespace std;
// class Book{
//     char Booktitle[25];
//     int BookCost;
//     int BookStock;
//     Book();
//     public:
//     void SetBookDetails(const char &title, double cost, int stock);
//     void DisplayBookDetails();
//     void SearchForBook(const char* title, int quantity);
// };


#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <cstring>
class Book {
    char BookTitle[25];
    double BookCost;
    int BookStock;
public:
    // Constructor
    Book();
    // Member functions
    void SetBookDetails(const char* title, double cost, int stock);
    void DisplayBookDetails() const;
    void SearchForBook(const char* title, int quantity) const;
};
#endif // BOOK_H





