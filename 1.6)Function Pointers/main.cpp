#include <iostream>

using namespace std;

typedef int (*fcnPtr)(int, int);

int a(){return 4;}

void uglyFunction(int (*fcnPtrA)(int, int), int (*fcnPtrB)(int, int)) {
    cout << "This is a ugly function syntax\n";
    cout << fcnPtrA(4,5) << "\n";
    cout << fcnPtrB(6,7) << "\n";
}

void beautyFunction(fcnPtr A, fcnPtr B) {
    cout << "This is a beauty function syntax\n";
    cout << A(4,5) << "\n";
    cout << B(6,7) << "\n";
}

int A(int num1, int num2) {
    return num1 + num2;
}

int B(int num1, int num2) {
    return num1 + num2;
}


int main()
{
    int (*ptr)() = a;

//  all of them give the same result
    cout << (*ptr)() << "\n";
    cout << (ptr)() << "\n";
    cout <<  ptr() << "\n";

    uglyFunction(A,B);
    beautyFunction(A,B);

    fcnPtr C = A; // same with this: int (*C)(int, int) = A;
    cout << C(40, 50) << "\n";

    return 0;
}
