#include<iostream>
using namespace std;
int& check(int& x){
    x = x + 20;
    return x;
}

int main(){
    int a = 100;
    int &test = check(a);
    cout << "a= " << a << " test= "<<test<<endl;
}