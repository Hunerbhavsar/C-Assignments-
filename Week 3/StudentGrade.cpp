#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    int marks[5];

public:
    Student(int id, string studentName, int m[]) {
        studentID = id;
        name = studentName;
        for (int i = 0; i < 5; i++) marks[i] = m[i];
    }

    double calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) sum += marks[i];
        return sum / 5.0;
    }

    void displayDetails() {
        cout << "Student ID: " << studentID << ", Name: " << name << ", Average Marks: " 
             << calculateAverage() << endl;
    }
};

int main() {
    int marks1[5] = {85, 90, 78, 92, 88};
    Student s1(1, "John", marks1);
    
    int marks2[5] = {70, 75, 80, 85, 90};
    Student s2(2, "Emma", marks2);

    s1.displayDetails();
    s2.displayDetails();
}
