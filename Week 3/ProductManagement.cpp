#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    double price;
    int quantity;

public:
    Product(int id, string name, double p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    double calculateTotalPrice() { return price * quantity; }

    void productDetails() {
        cout << "Product ID: " << productID << ", Name: " << productName
             << ", Price: " << price << ", Quantity: " << quantity
             << ", Total Cost: " << calculateTotalPrice() << endl;
    }
};

int main() {
    Product cart[] = { Product(101, "Laptop", 500.99, 2),
                       Product(102, "Phone", 299.49, 3),
                       Product(103, "Headphones", 79.99, 1) };

    for (Product p : cart) p.productDetails();
}
