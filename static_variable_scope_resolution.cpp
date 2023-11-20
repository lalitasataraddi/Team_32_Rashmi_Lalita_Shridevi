#include<iostream>
using namespace std;
class Test{
static int x;
public:
    static int y;
    void fun(int x){
        int z;
    cout<<"value of static x is="<<Test::x;
    cout<<"\nvalue of local x is="<<x;
    z=((Test::x)*x+(Test::y));
    cout <<"\nthe value of z = "<<z;
    }};
    //static variable must defined as
    int Test::x=1;
     int Test::y=2;
     int main(){
     Test obj;
     int x=3;
     obj.fun(x);
     cout<<"\n Test::y="<<Test::y;
     return 0;
     }
