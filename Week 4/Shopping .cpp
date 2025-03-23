#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    Product() : productID(0), productName("Unknown"), price(0.0), quantity(0) {}

    Product(int id, string name, double p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    double calculateTotalPrice() { return price * quantity; }

    void productDetails() {
        cout << "Product ID: " << productID << ", Name: " << productName
             << ", Price: $" << price << ", Quantity: " << quantity
             << ", Total Cost: $" << calculateTotalPrice() << endl;
    }

    ~Product() { cout << "Product " << productName << " removed from cart.\n"; }
};

int main() {
    Product cart[] = { Product(101, "Laptop", 1000, 2),
                       Product(102, "Phone", 700, 1),
                       Product(103, "Tablet", 300, 3) };

    for (Product& p : cart) p.productDetails();
}
