#include <iostream>
using namespace std;

class A
{
    public:
      void display()
      {
          cout<<"Class A"<<endl;
      }
};

class B
{
    public:
      void display()
      {
          cout<<"Class B"<<endl;
      }

};

class C : public A,public B
{

};

int main()
{
    cout<<"Multiple Inheritance"<<endl;
    C obj;
    obj.A::display();
    obj.B::display();
    return 0;
}
