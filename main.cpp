#include<iostream>
#include "Book.h"
using namespace std;
int main()
{
    Book book1, book2 , book3;
    book1.SetBookDetails("C++ Programming", 29.99, 10);
    book2.SetBookDetails("Data Structures", 39.99, 5);
    book3.SetBookDetails("Algorithms", 49.99, 2);

    // Display book details
    cout << "Book 1 details:" << endl;
    book1.DisplayBookDetails();
    cout << endl;
    cout << "Book 2 details:" << endl;
    book2.DisplayBookDetails();
    cout << endl;
    cout << "Book 3 details:" << endl;
    book3.DisplayBookDetails();
    cout << endl;
    // Search for a book and check availability
    cout << "Searching for 'C++ Programming' with quantity 3:" << endl;
    book1.SearchForBook("C++ Programming", 3);
    cout << endl;
    cout << "Searching for 'Data Structures' with quantity 6:" << endl;
    book2.SearchForBook("Data Structures", 6);
    cout << endl;
    cout << "Searching for 'Machine Learning' with quantity 1:" << endl;
    book3.SearchForBook("Machine Learning", 1);
    cout << endl;
    return 0;

}