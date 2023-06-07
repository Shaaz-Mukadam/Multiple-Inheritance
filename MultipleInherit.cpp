//*************Multiple Inheritance*************
//Multiple inheritance that allow child class to inherit the multiple class property
//2 parent class property can inherite in single class base class.

#include<iostream>
using namespace std;
class A{
 public:
     void Afun() {
     cout<<"This is Function A of multiple inhertance \n";
     }
};
class B{
 public:
     void Bfun() {
     cout<<"This is Function B of multiple inhertance \n";
     }
};
class C : public A, public B{
public:

};
int main() {
 C c;
 c.Afun();
 c.Bfun();

 return 0;
}
