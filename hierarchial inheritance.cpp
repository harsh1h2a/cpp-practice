#include <iostream>
#include<vector>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;
};

class student:public person{
public:
    int rollno;
    
};

class teacher:public person{
public:
    string subject;
};

int main() {
    teacher t1;
    t1.name="modi";
    t1.subject="applied phy";
    
    student s1;
    s1.name="aman";
    s1.rollno=21;
    
    cout<<"name of teacher = "<<t1.name<<endl;
    cout<<"subject = "<<t1.subject<<endl;
    cout<<"\nname of student = "<<s1.name<<endl;
    cout<<"roll no. = "<<s1.rollno<<endl;
    
    
    return 0;
}
