#include <iostream>

class A {
public:
    int m_number;
    A(int number) : m_number{number} {}

/*
    int getNumber1 () const {
        m_number = 20;  // we can't change member object inside of const function
        return m_number;}

*/
    int getNumber2 () const {
        const_cast<A*>(this)->m_number = 20;
        return m_number;
    }
};



int main()
{

    const int number1  = 20;
    const int* number2 = &number1;
//  invalid because const_cast cant used non-pointer variable
//  int* number3 = const_cast<int *>(number1);
    int* number3 = const_cast<int *>(number2);
    *number3 = 30;

//  invalid because we cant assign constant data to non-const variable
//  int *number4 = number1;
    int *number4 = number3; // this is valid

    std::cout << number1  << "\n";    // result = 20
    std::cout << *number2 << "\n";    // result = 30
    std::cout << *number3 << "\n";    // result = 30
    std::cout << *number4 << "\n\n";  // result = 30

    std::cout << &number1 << "\n";    // result = address of  number1
    std::cout << number2  << "\n";    // result = address of  number1
    std::cout << number3  << "\n";    // result = address of  number1
    std::cout << number4  << "\n\n";  // result = address of  number1


    const int  x = 4;
//  const int* y = const_cast<int *>(x); // invalid and ridiculous




   return 0;
}
