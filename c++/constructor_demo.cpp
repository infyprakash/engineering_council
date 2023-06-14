#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(){
        cout << "Default constructor is called" << endl;
        length = 10;
        breadth = 20;
    }
    Rectangle(int l,int b){
        cout << "Parameterized constructor is called" << endl;
        length = l;
        breadth = b;
    }
    Rectangle(const Rectangle& obj){
        cout << "copy constructor is called" << endl;
        length = obj.length;
        breadth = obj.breadth;
    }
};

int main(){
    Rectangle r1; //default constructor is called
    Rectangle r2(10, 20); // parametrized constructor is called
    Rectangle r3(r2); // copy constructor is called
}