#include <iostream>
using namespace std;
#include <string>

class myClass{
  private:
    string name;

  public:
    void setName(string x){
      name = x;
    }
    string getName(){
      return name;
    }
};

int main(){
    myClass myObj;
    myObj.setName("Pravin");
    cout<<myObj.getName()<<endl;
    return 0;
}
