#include<iostream>
using namespace std;

class Employee {
public:

    Employee(string name, int employeeId) {
        this->name = name;
        this->employeeId = employeeId;
    }


    void displayDetails() {
        cout << "Employee Name:\n " << name ;
        cout << "Employee ID: " << employeeId ;
    }

private:
   string name;
    int employeeId;
};

int main() {

    Employee employee1("John Doe", 12345);

cout << "Employee Details:" ;
    employee1.displayDetails();

    return 0;
}
