#include<iostream>

int sum(int a=10,int b=20,int c=5){
    return (a + b+c);
}

int main(){
    std::cout << sum(100, 200) << std::endl;
    std::cout << sum(-1) << std::endl;
    std::cout << sum(3, 4) << std::endl;
    return 0;
}