/*You are developing software for a library system, and you have a Book class to represent individual books.
Each book has a title, author, and a publication year.Using Constant Member Function */


#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    int publicationYear;
    Book(const string& _title, const string& _author, int _year):title(_title), author(_author), publicationYear(_year) {}
   // Constant member function to retrieve book information
    void printBookInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};
int main() {
    Book book1("A River Sutra", "Geeta Mehta", 1960);
    Book book2("1984", "George Orwell", 1949);
    const Book& constBook = book1; // Use a const reference to a book
    //book1.printBookInfo();    // Call the const member function on a non-const object
    constBook.printBookInfo(); // Call the const member function on a const object
    return 0;
}
