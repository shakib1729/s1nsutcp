#include <iostream>
using namespace std;

int main () {
  try
  {
    throw 10;
  }
  catch (int e)
  {
    cout << "An exception occurred " << e << '\n';
  }
  return 0;
}
