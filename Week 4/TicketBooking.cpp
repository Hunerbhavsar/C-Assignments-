#include <iostream>
using namespace std;

class MovieTicket {
private:
    string movieName;
    int seatNumber;
    double price;
    bool isBooked;

public:
    MovieTicket(string movie, int seat, double p) {
        movieName = movie;
        seatNumber = seat;
        price = p;
        isBooked = false;
    }

    void bookTicket() {
        if (isBooked)
            cout << "Seat " << seatNumber << " is already booked.\n";
        else {
            isBooked = true;
            cout << "Ticket booked for " << movieName << " (Seat " << seatNumber << ")\n";
        }
    }

    void cancelTicket() {
        if (!isBooked)
            cout << "Seat " << seatNumber << " is not booked yet.\n";
        else {
            isBooked = false;
            cout << "Booking for Seat " << seatNumber << " has been cancelled.\n";
        }
    }

    void displayTicketDetails() {
        cout << "Movie: " << movieName << ", Seat: " << seatNumber
             << ", Price: $" << price << ", Status: " << (isBooked ? "Booked" : "Available") << endl;
    }

    ~MovieTicket() { cout << "Ticket for seat " << seatNumber << " is deleted.\n"; }
};

int main() {
    MovieTicket t1("Avengers", 10, 12.99);
    t1.displayTicketDetails();
    t1.bookTicket();
    t1.cancelTicket();
    t1.displayTicketDetails();
}
