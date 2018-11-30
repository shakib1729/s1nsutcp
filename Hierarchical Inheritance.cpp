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

class B:public A
{
};

class C : public A
{
};

int main()
{
    cout<<"Hierarchical Inheritance"<<endl;
    B objB;
    C objC;
    objB.display();
    objC.display();

    return 0;
}
