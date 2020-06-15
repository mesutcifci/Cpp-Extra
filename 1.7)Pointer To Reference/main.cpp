#include <iostream>

void function1(int* p) {
    std::cout << "function1 called" << "\n";
    p = new int;
}

void function2(int*& p) {
    std::cout << "function2 called" << "\n";
    p = new int;
}



int main()
{
    int *ptr = nullptr;



    function1(ptr);
    std::cout << "adress = " << ptr << "\n";

    function2(ptr);
    std::cout << "adress = " << ptr << "\n";


    return 0;
}
