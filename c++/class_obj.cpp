#include<iostream>
using namespace std;
class Circle{
    private: // access specifier
        double radius;
    public:
        void setRadius(double);
        double getArea();
};

void Circle::setRadius(double r){
        radius = r;
}
double Circle::getArea(){
        return(3.1415 * radius * radius);
}
int main()
{
        Circle c1; // c1 is object of type circle
        c1.setRadius(15.23);
        cout << "Area of circle= " << c1.getArea() << endl;
        return 0;
}