#include <iostream>
using namespace std;
class add{
public:
int a,b,sum;
  void calculate(){
  sum =a+b;
  }
}
int main(){
add obj;
cout<<"enter two numbers";
cin>>obj.a>>obj.b;
obj.calculate();
cout<<"sum=<<obj.sum";
return0;
}
