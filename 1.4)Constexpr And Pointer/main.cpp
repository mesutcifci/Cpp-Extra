#include <iostream>

using namespace std;


int i = 10;
int j = 10;

int main()
{
    const int *p1 = &i;     // p1 is a pointer to a const int
    p1  = &j;
//  *p1 = 5;

    // i must be defined outside any function
    constexpr int *p2 = &i; // p2 is a const pointer to a const int
//  p2  = &j;
    *p2 = 4;

    constexpr const int *p3 = &i;
 // p3  = &j;
 // *p3 = 6;


    return 0;
}
