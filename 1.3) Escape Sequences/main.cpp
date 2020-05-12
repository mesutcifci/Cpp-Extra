#include <iostream>

int main()
{
    std::cout << "1)\\n = \n";                 // \\n \n  newline
    std::cout << "2)Hello\tWorld"  << "\n";    // \t      horizontaltab
    std::cout << "3)Hello\vWorld"  << "\n";    // \v      vertical tab
    std::cout << "4)Hello\bWorld"  << "\n";    // \b      backspace
    std::cout << "5)\aHello World" << "\n";    // \a      alarm
    std::cout << "6)Hello\rWorld"  << "\n";    // \r      carriage return
    std::cout << "7)Hello\fWorld"  << "\n";    // \f      form feed

    std::cout << "\115" << "\n"; // \115 = character M
    return 0;
}
