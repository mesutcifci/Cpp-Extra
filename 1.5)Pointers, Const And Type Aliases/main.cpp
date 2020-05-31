#include <iostream>

using namespace std;

int main()
{
    typedef char *pstring;
    char c = 'c';
    char d = 'd';

    const pstring p1 = &c;  // p1 is constant pointer to char
//   p1 = &d;
    *p1 = 'f';

    const char *p2 = &c; // p2 is pointer to const char
    p2 = &d;
//  *p2 = 'f';

    const pstring *p3;   // p3 is a pointer to a constant pointer to char

    return 0;
}
