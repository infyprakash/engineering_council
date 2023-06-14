#include<iostream>

namespace A{
    int a = 10;
    void callme()
    {
        std::cout << "callme() function from namespace A" << std::endl;
    }
}

namespace B{
    int a = 20;
    void callme()
    {
        std::cout << "callme() function from namespace B" << std::endl;
    }
}

int main(){
    A::callme();
    std::cout << A::a << std::endl;
    B::callme();
    std::cout << B::a << std::endl;
    return 0;
}
