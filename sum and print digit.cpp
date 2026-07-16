#include <iostream>
using namespace std;
void sumdigit(int n){
    int sum =0;
    while(n!=0){
        int digit =n%10;
        sum +=digit;
        n/=10;
    }
    cout <<"Sum of digit  = "<< sum<< endl;
}
void printdigit(int n){
    while(n!=0){
        int digit=n%10;
        cout<<digit<<"."<<endl;
        n/=10;
    }
}
int main() {
    int n=1261257614;
    printdigit(n);
    return 0;
}
