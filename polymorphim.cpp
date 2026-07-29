#include <iostream>
#include<vector>
#include<string>
using namespace std;

class student{
public:
    string name;
    
    student(){
        cout<<"non parameterized\n";
    }
    student(string name){
        this->name=name;
        cout<<"parameterized\n";
    }
};

int main() {
    student s1;
    student s2("hulk");
    return 0;
}
