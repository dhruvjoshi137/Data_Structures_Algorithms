#include <iostream>
using namespace std;

class Sample { // Class name should start with a capital letter

public:
    int id;

    void init(int x) { // Function to initialize id
        id = x;
    }

    Sample() {} // Default constructor

    Sample(const Sample& other) { // Copy constructor for deep copy (optional)
        id = other.id; // Deep copy the id member
    }

    void display() {
        cout << id << endl;
    }
};

int main() {

    Sample obj1; // Declare object obj1
    obj1.init(10); // Call the init function to initialize id
    obj1.display(); // Display the value of id

    Sample obj2(obj1);
    obj2.display();

    return 0;
}
