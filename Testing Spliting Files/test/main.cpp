#include <iostream>
#include "MyClass.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    MyClass obj;
    obj.myPrint();

    MyClass *ptr = &obj;

    for(int i = 0; i <= 5; i++){
      ptr->myPrint();
    }

    YourClass object;
    object.printTable(9);
    return 0;
}
