#include <iostream>
using namespace std;

class PrintX{
 public:
      void display(int x){
        cout<<x<<endl;
      }
      void display(int x,int y){
        cout<<x<<" "<<y<<endl;
      }
      void display(double x){
        cout<<x<<endl;
      }
};

int main(){
    cout<<"Function Overloading -- Polymorphism"<<endl;
    PrintX obj;
    obj.display(5);
    obj.display(5,10);
    obj.display(3.4);

}
