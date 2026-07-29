#include <iostream>
#include<vector>
#include<string>
using namespace std;

class student{
public:
    void show(string name){
        cout<<"name = "<<name<<endl;
    }
    void show(int rollno){
        cout<<"roll no. = "<<rollno<<endl;
    }
};

int main() {
    student s1;
    s1.show("hulku");
    s1.show(2121);
    
    return 0;
}
