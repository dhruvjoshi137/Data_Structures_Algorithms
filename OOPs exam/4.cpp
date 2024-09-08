#include <iostream>

using namespace std;

class Student {
public:
    // Member variables with appropriate data types
    string name;
    int age;
    char gender;
    double credits;

    // Constructor to initialize student object (use initializer list for clarity)
    Student(string n, int a, char g, double c) : name(n), age(a), gender(g), credits(c) {}

    // Print student information with proper formatting and labels
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Credits: " << credits << endl;
    }
};

int main() {
    // Create a Student object using the constructor
    Student s1("Dhruv", 18, 'M', 800.0);

    // Call the printInfo method to display student data
    s1.printInfo();

    return 0;
}
