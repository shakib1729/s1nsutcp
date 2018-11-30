#include <iostream>
using namespace std;

class A
{
 	public:
 	  void display(){
        cout<<"Class A"<<endl;
 	  }
};

class B : public A
{

};
class C
 {
 	public:
 	  void display(){
        cout<<"Class C"<<endl;
 	  }

};
class D : public B, public C
{

};

int main()
{
    cout<<"Hybrid Inheritance"<<endl;
    D obj;
    obj.A::display();
    obj.C::display();

 	return 0;
}
