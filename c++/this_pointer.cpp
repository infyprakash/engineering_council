#include<iostream>
using namespace std;

class A{
    private:
        int a;
        int b;
    public:
    A(){
        this->a = 10;
        this->b = 20;
    }
    void display(){
        cout << "a= " << this->a << " b= " << this->b << endl;
    }
};

int main(){
    A a;
    a.display();
    return 0;
}