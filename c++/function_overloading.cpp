#include<iostream>
using namespace std;

float sum(float a,float b){
    return (a + b);
}

int sum(int a,int b){
    return (a + b);
}

int sum(int a,int b,int c){
    return (a + b + c);
}

float sum(float a,int b){
    return (a + b);
}

int main(){
    cout << sum(20.05f,10)<<endl;
    cout << sum(1, 2, 3)<<endl;
    return 0;
}