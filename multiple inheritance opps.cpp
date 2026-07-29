#include <iostream>
#include<vector>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;
};

class student : public person{
public:
    int rollno;
    
};

class gradstudent : public student {
public:
    string reserch;
};

int main() {
    gradstudent s1;
    s1.name="chameli";
    s1.reserch="light in prism.";
    cout<<"name    = "<<s1.name<<endl;
    cout<<"reserch = "<<s1.reserch<<endl;
    
    return 0;
}
