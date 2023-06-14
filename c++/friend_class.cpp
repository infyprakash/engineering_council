#include<iostream>
using namespace std;

class A{
    private:
        int data;
    public:
        A():data(20){}
        friend class B;
};

class B{
    public:
    void check(const A& obj){
        cout << "data= " << obj.data << endl;
    }
};

int main(){
    A a;
    B b;
    b.check(a);
    return 0;
}