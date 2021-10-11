#include <iostream>
using namespace std;

class MyClass{
  public:
    MyClass(){
      cout<<"Hi! This is Prabhat from Rapidbuzz Return! Nice to meet cha."<<endl;
    }
    void setYourName(string x){
      yourName = x;
    }
    string getYourName(){
      return yourName;
    }
  private:
    string yourName;
};

int main(){
    MyClass obj;
    return 0;
}

