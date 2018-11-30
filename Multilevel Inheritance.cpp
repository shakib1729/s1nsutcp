#include <iostream>
using namespace std;

class A
{
    public:
      void display()
      {
          cout<<"Class A";
      }
};

class B : public A
{

};

class C : public B
{

};

int main()
{
    cout<<"Multilevel Inheritance"<<endl;
    C obj;
    obj.display();
    return 0;
}
