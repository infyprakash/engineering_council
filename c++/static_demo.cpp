#include<iostream>
using namespace std;
class Test{
    public:
    static int count; // static variable
    Test(){
        count++;
    }
    // static function 
    static int getCount(){
        return count;
    }
};
int Test::count = 0;

int main(){
    Test t1;
    Test t2;
    Test t3;

    cout << "Number of objects created: " << Test::getCount() << endl;
    return 0;
}