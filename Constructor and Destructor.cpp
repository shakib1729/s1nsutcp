#include <iostream>
using namespace std;

class A{
 public:
    A(){
        cout<<"Constructor"<<endl;
    }
    ~A(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    A obj;
}
