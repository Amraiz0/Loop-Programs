#include <iostream>
using namespace std;

// Program 1
void print1to10() {
    cout << "\n--- Numbers 1 to 10 ---\n";
    for (int i = 1; i <= 10; i++) {
        cout << i << "\n";
    }
}

// Program 2
void printEven() {
    cout << "\n--- Even Numbers 2 to 10 ---\n";
    for (int i = 2; i <= 10; i += 2) {
        cout << i << "\n";
    }
}

// Program 3
void printMessage() {
    cout << "\n--- Message 5 Times ---\n";
    for (int i = 1; i <= 5; i++) {
        cout << "Message " << i << ": Hello!\n";
    }
}

// Program 4
void printStars() {
    cout << "\n--- Star Pattern ---\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

// Program 5
void printReverse() {
    cout << "\n--- Reverse Order ---\n";
    for (int i = 10; i >= 1; i--) {
        cout << i << "\n";
    }
}

int main() {
    int choice;

    cout << "================================\n";
    cout << "   C++ Programs Menu\n";
    cout << "================================\n";
    cout << "1. Print Numbers 1 to 10\n";
    cout << "2. Print Even Numbers\n";
    cout << "3. Print Message Multiple Times\n";
    cout << "4. Print Stars\n";
    cout << "5. Print Reverse Order\n";
    cout << "0. Exit\n";
    cout << "================================\n";

    while (true) {
        cout << "\nChoice enter karo: ";
        cin >> choice;

        if (choice == 1) print1to10();
        else if (choice == 2) printEven();
        else if (choice == 3) printMessage();
        else if (choice == 4) printStars();
        else if (choice == 5) printReverse();
        else if (choice == 0) {
            cout << "Bye!\n";
            break;
        }
        else {
            cout << "Galat choice! 0-5 likhو\n";
        }
    }

    return 0;
}