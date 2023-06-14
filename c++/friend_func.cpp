#include<iostream>
using namespace std;

class Test{
    private:
        int data;
    public:
    Test():data(10){}
    friend void show(const Test& obj);
};
void show(const Test& obj){
    cout << "data= " << obj.data << endl;
}
int main(){
    Test t;
    show(t);
    return 0;
}