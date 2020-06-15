#include <iostream>

void function1(int* p) {
    std::cout << "function1 called" << "\n";
    *p = 20;
}

void function2(int*& p) {
    std::cout << "function2 called" << "\n";
    *p = 30;
}



int main()
{
    int number = 10;
    int *ptr = &number;

    std::cout << "number = " << number << "\n";

    function1(ptr);
    std::cout << "number = " << number << "\n";

    function2(ptr);
    std::cout << "number = " << number << "\n";


    return 0;
}
