#include <iostream>
#include <cstring> // Correct C++ header for strcpy
#include <limits>  // Required for advanced buffer clearing

using namespace std;

struct book {
    int bookID;
    char title[20];
    float price;
};

// Function prototypes - 'struct' keyword is optional here in C++
book inputData();
void Displaybook(book b);

book inputData() {
    book b;
    cout << "Enter the bookID: ";
    cin >> b.bookID;

    // Clear the buffer after numeric input to ensure getline works
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    cout << "Enter Title: ";
    cin.getline(b.title, 20);

    cout << "Enter Price: ";
    cin >> b.price;
    
    return b;
}

void Displaybook(book b) {
    cout << "\n--- Book Details ---\n";
    cout << "ID: " << b.bookID << " | Title: " << b.title << " | Price: " << b.price << endl;
}

int main() {
    // Initializing b1 and b2
    book b1 = {1, "Atomic Habit", 799.00}, b2;
    b2.bookID = 2;
    strcpy(b2.title, "ProgramminG");
    b2.price = 1099.00;
    
    // Testing the display of hardcoded data
    Displaybook(b1);
    Displaybook(b2);

    // Testing user input
    book b3 = inputData();
    Displaybook(b3);

    return 0;
}