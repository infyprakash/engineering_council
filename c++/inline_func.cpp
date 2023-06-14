#include<iostream>
inline int max_num(int a,int b){
    return a > b ? a : b;
}

int main(){
    int num1, num2, res;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    res = max_num(num1, num2);
    std::cout << "Largest number= " << res << std::endl;
    return 0;
}