#include <iostream>
using namespace std;

class Rectangle {
private:
 int length,width;
 int  Area;

public:
    void getdata(){
             cout <<"enter the length: ";
             cin >>length;

             cout <<"enter the width: ";
             cin >>width;
}

     void calculate(){

          Area = length * width;
}
     void display() {
    cout <<"length: "<<length<<endl;
     cout <<"width: "<<width<<endl;
    cout <<"Area: "<<Area<<endl;
}
};

int main () {
Rectangle obj;
 obj.getdata();
 obj.calculate();
 obj.display();
 return 0;
}

