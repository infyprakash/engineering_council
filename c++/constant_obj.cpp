#include<iostream>
using namespace std;

class Circle{
    double radius;
    public:
    Circle(double r):radius(r){}
    double getArea() const{
        return 3.1415 * radius * radius;
    }
    void setRadius(double r){
        radius = r;
    }
    void display(){
        cout << "radius: " << radius << endl;
    }
};

int main(){
    const Circle c(10);
    cout << "Area= " << c.getArea() << endl;
    // c.setRadius(20);
    c.display();
    Circle c1(20);
    cout << "Area= " << c1.getArea() << endl;
    c1.setRadius(14);
    return 0;
}