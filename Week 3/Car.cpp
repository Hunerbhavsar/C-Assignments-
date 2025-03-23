#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;
    int year;
    static int totalCars;

public:
    Car(string b, string m, double p, int y) {
        brand = b;
        model = m;
        price = p;
        year = y;
        totalCars++;
    }

    void displayCarInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Price: $" << price
             << ", Year: " << year << endl;
    }

    static void displayTotalCars() { cout << "Total Cars: " << totalCars << endl; }
};

int Car::totalCars = 0;

int main() {
    Car c1("Toyota", "Camry", 30000, 2022);
    Car c2("Ford", "Mustang", 45000, 2023);
    
    c1.displayCarInfo();
    c2.displayCarInfo();
    Car::displayTotalCars();
}
