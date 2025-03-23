#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;
    string designation;

public:
    Employee(int id, string n, double s, string d) {
        empID = id;
        name = n;
        salary = s;
        designation = d;
    }

    Employee(const Employee &e) {
        empID = e.empID;
        name = e.name;
        salary = e.salary;
        designation = e.designation;
    }

    void displayDetails() {
        cout << "ID: " << empID << ", Name: " << name << ", Salary: $" << salary 
             << ", Designation: " << designation << endl;
    }
};

int main() {
    Employee E1(101, "Alice", 50000, "Manager");
    Employee E2 = E1;
    E1.displayDetails();
    E2.displayDetails();
}
