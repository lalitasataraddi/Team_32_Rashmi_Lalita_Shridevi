#include <iostream>
using namespace std;
float x,y,z;

class Class1 {
public:
    void method1() {
        z=x+y;
       cout << "\nMethod1 from Class1 z ="<<z ;
    }
};

class Class2 {
public:
    void method2() {
        z=x-y;
       cout << "\nMethod2 from Class2 z ="<<z;
    }
};

class totalClass: public Class1, public Class2 {
public:
    void totalMethod() {
        z=x*y;
       cout << "\nMethod2 from Class2 z ="<<z;
    }
};

int main() {
    cout<<"enter x and y/n";
cin>>x>>y;
    totalClass obj;
    obj.method1();
    obj.method2();
    obj.totalMethod();
    return 0;
}
