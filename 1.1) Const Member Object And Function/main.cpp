#include <iostream>

class A {
public:
    int m_number;
    A(int number) : m_number{number} {}

    int getNumber () const {return m_number;}
 /* int getNumber2 () const {
      m_number = 20;  // we can't change member object inside of const function
      return m_number;}*/

    void setNumber(int number) { m_number = number; }
};

int main()
{

    A a1{10};
    a1.setNumber(20);
    a1.getNumber();

    const A a2{10};
//  a2.setNumber(20);   // invalid
//  a2.m_number = 10;  // invalid
    a2.getNumber();



    return 0;
}
