#include<iostream>
using namespace std;
class Myclass{
public:
    void fun();
    };
void Myclass::fun(){
   int b,c,sum;
   cout<<"value of b and c";
   cin>>b>>c;
   sum=b+c;
   cout<<"The sum is"<<sum;
}
int main(){
Myclass a;
a.fun();
return 0;
}
