/*You are building a contact management application, and you need to create a Contact class to represent individual contacts in an address book.
instance member function.*/


#include <iostream>
#include <string>
using namespace std;
class Contact {
public:
    string name;
    string phoneNumber;
    string email;
    Contact(const string& _name, const string& _phone, const string& _email): name(_name), phoneNumber(_phone), email(_email) {}
    // Instance member function to print contact details
    void printContactDetails() {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phoneNumber << endl;
       cout << "Email: " << email << endl;
    }
};
int main() {
    Contact contact1("John Doe", "555-123-4567", "john@example.com");
    Contact contact2("Alice Smith", "555-987-6543", "alice@example.com");
    contact1.printContactDetails();
    contact2.printContactDetails();
return 0;
}
