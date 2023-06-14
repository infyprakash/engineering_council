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
    void display(){
        cout << "calling display method" << endl;
    }
};

int main(){
    Resource *robj = new Resource();
    robj->display();
    Resource *arr = new Resource[2];
    for (int i = 0; i < 2;i++){
        arr[i].display();
    }
    return 0;
}