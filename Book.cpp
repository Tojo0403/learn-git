// #include<book.h>
// using namespace std;
// Book::Book() : BookCost(0.0), BookStock(0) {
//     std::memset(Booktitle, 0, sizeof(Booktitle));
// }

// void Book::SetBookDetails(const char &title, double cost, int stock)
// {
//     // int len =strlen(title);
//     int len =sizeof(title)/sizeof(title[0]);
//     for(int i=0;i<len;i++)
//     {
//         Booktitle[i]=title[i];
//     }
//     BookCost= cost;
//     BookStock= stock;
// }

// void Book::DisplayBookDetails()
// {
//     cout<<"Booktitle is "<<Booktitle;
//     cout<<"Bookcost is "<<BookCost;
//     cout<<"BookStock is "<<BookStock;
// }

// void Book::SearchForBook(const char title[],int quantity)
// {
//     if(title == Booktitle)
//     {
//         if(quantity>= BookStock)
//         {
//             cout<<"not sufficient amount"<<"\n";
//         }
//         else
//         {
//             cout<<"Sufficient Amount"<<"\n";
//             cout<<"Billing Amount"<<BookCost*quantity<<"\n";
//         }
//     }
//     else
//     {
//         cout<<"Book not present";
//     }
// }

#include "Book.h"
// Constructor
Book::Book() : BookCost(0.0), BookStock(0) {
    std::memset(BookTitle, 0, sizeof(BookTitle));
}
// Set the details of the book
void Book::SetBookDetails(const char* title, double cost, int stock) {
    std::strncpy(BookTitle, title, sizeof(BookTitle) - 1);
    BookCost = cost;
    BookStock = stock;
}
// Display the details of the book
void Book::DisplayBookDetails() const {
    std::cout << "Book Title: " << BookTitle << std::endl;
    std::cout << "Book Cost: $" << BookCost << std::endl;
    std::cout << "Book Stock: " << BookStock << std::endl;
}
// Search for the book by title and quantity
void Book::SearchForBook(const char* title, int quantity) const {
    if (std::strcmp(BookTitle, title) == 0) {
        if (BookStock >= quantity) {
            std::cout << "Book available with sufficient stock." << std::endl;
            std::cout << "Billing cost: $" << (BookCost * quantity) << std::endl;
        } else {
            std::cout << "Book available but the stock is insufficient." << std::endl;
        }
    } else {
        std::cout << "Book for the specified title does not exist." << std::endl;
    }
}