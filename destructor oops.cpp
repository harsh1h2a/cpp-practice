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
    
    ~student(){
        cout<<"delete everything."<<endl;
        delete cgpaptr;
    }
    
    void getinfo(){
        cout<<"name = "<<name<<endl;
        cout<<"cgpa = "<<*cgpaptr<<endl<<endl;
    }
    
};

int main() {
    student s1("rahul",8);
    s1.getinfo();
    
    return 0;
}
