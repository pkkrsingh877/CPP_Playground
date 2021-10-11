#include <iostream>
using namespace std;
#include <string>

class MyClass{
  private:
    int number;
  public:
    void setMyData(int x){
      number = x;
    }
    int getMyData(){
      return number;
    }
};

int main(){
    MyClass obj;
    obj.setMyData(99);
    cout<<obj.getMyData()<<endl;
    return 0;
}
