#include "MyClass.h"
#include <iostream>

using namespace std;


MyClass::MyClass()
{
      //ctor
      cout << "Constructor" <<endl;
}

void MyClass::myPrint(){
      cout << "Hello!" <<endl;
}

YourClass::YourClass(){
      cout<<"Calling Constructor of Your Class"<<endl;
}

void YourClass::printTable(int x){
      for(int i = 1; i <=10; i++){
            cout<<i*x<<endl;
      }
}

/*MyClass::~MyClass(){
      //dtor
      cout<<"Destructor"<<endl;
} */
