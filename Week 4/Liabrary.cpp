#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    string title, author;
    double price;

public:
    Book() : bookID(0), title("Unknown"), author("Unknown"), price(0.0) {}

    Book(int id, string t, string a, double p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    void displayBookInfo() {
        cout << "Book ID: " << bookID << ", Title: " << title 
             << ", Author: " << author << ", Price: $" << price << endl;
    }
};

int main() {
    Book b1, b2(101, "C++ Programming", "Bjarne Stroustrup", 50.99);
    b1.displayBookInfo();
    b2.displayBookInfo();
}
