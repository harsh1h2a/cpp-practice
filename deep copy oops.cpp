#include <iostream>
#include<vector>
#include<string>
using namespace std;

class student{
public:
    string name;
    double* cgpaptr;
    
    student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    
    student(student& obj){
        this->name=obj.name;
        cgpaptr=new double;
        *cgpaptr=*obj.cgpaptr;
    }
    
    void getinfo(){
        cout<<"name = "<<name<<endl;
        cout<<"cgpa = "<<*cgpaptr<<endl<<endl;
    }
    
};

int main() {
    student s1("rahul",8);
    student s2(s1);
    
    s1.getinfo();
    *(s2.cgpaptr)=9.2;
    s1.getinfo();
    
    s2.name="arjun";
    s2.getinfo();
    return 0;
}
