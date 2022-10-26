#include <iostream>
using namespace std;

class Bank
{
       int i;
    public:
       Bank(): i(0) {  }
       void operator ++()
          { ++i; }
       void operator --()
          { --i; }
       void Display()
          { cout << "Number of person inside of bank: " << i << endl; }
};

int main()
{
    Bank obj;

    obj.Display();

    ++obj;
    ++obj;
    obj.Display();

    --obj;
    obj.Display();

    return 0;
}
