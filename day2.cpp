#include<iostream>
using namespace std;
class user{
     string name;
     int age;
public:
     user(){     //constructor
          cout<<"Enter your name: ";
          cin>>name;
          cout<<"Enter your age: ";
          cin>>age;
     }
     greet(){
          cout<<"Hello "<<name<<". Your age is "<<age<<" years."<<endl;
};

int main(){
  user user1();
  user.greet();
  return 0;
}
