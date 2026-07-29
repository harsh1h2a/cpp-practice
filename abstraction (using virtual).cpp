#include <iostream>
#include<vector>
#include<string>
using namespace std;

class shape{
    virtual void draw()=0; //virtual make this class to abstracted class.
        
};
class circle:public shape{
    public:
        void draw(){
            cout<<"drawing a circle\n";
        }
};

int main() {
    circle c1;
    c1.draw();
    return 0;
    
}
