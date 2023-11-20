#include <iostream>
using namespace std;

class School {
public:
    class Student {
    private:
        string name;
        int age;

    public:
        Student(string n, int a) : name(n), age(a) {}

        void display() {
            cout << "Student Name: " << name << ", Age: " << age << " years" << endl;
        }
    };
};

int main() {
    cout << "Nested Class in C++ Example" << endl;

    School::Student student1("varun", 18);
    School::Student student2("tarun", 17);

    student1.display();
    student2.display();

    return 0;
}
