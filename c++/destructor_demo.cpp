#include<iostream>
using namespace std;

class Resource{
    public:
    Resource(){
        cout << "Constructor is called" << endl;
    }
    ~Resource(){
        cout << "Destructor is called" << endl;
    }
};

int main(){
    Resource robj;
}