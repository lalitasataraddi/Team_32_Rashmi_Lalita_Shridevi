#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor with parameters
    Person(const std::string& n, int a) : name(n), age(a) {
        // Additional initialization can be done here if needed
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Member function to display information
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Creating an object of the class with constructor
    Person person1("John", 25);

    // Using member function to display information
    person1.displayInfo();

    // Destructor will be called when the object goes out of scope
    return 0;
}
