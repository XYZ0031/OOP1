#include <iostream>
using namespace std;

int main() {
    string bookID;
    int dueDate, returnDate;

    // Input book ID
    cout << "Enter the book ID: ";
    cin >> bookID;

    // Input due date
    cout << "Enter the due date: ";
    cin >> dueDate;

    // Input return date
    cout << "Enter the return date: ";
    cin >> returnDate;

    // Calculate overdue days
    int overdueDays = returnDate - dueDate;
    int fineRate = 0;
    int fineAmount = 0;

    // Determine the fine rate based on overdue days
    if (overdueDays > 0) {
        if (overdueDays <= 7) {
            fineRate = 20;
        } else if (overdueDays <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
        fineAmount = fineRate * overdueDays;
    } else {
        cout << "The book is returned on time. No fine." << endl;
        return 0;
    }

    // Output fine details
    cout << "The book ID: " << bookID << endl;
    cout << "Overdue days: " << overdueDays << endl;
    cout << "Fine rate: " << fineRate << " per day" << endl;
    cout << "Total fine amount: " << fineAmount << endl;

    return 0;
}
