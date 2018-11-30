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

int main()
{
    cout<<"Single Inheritance"<<endl;
    B obj;
    obj.display();
    return 0;
}
