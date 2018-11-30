#include <iostream>
using namespace std;

class A
{
 int i;
 public:
 friend void fun();
};

void fun()
{
 A obj;
 obj.i=10;  // It can Access private data member of A Class
 cout << obj.i;
}

int main()
{
fun();
}
