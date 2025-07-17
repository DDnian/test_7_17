#include <iostream>
#include "add.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "3 + 5 = " << add(3,5) << endl;
    cout << "4 + 7 = " << add(4,7) << endl;
    cout << "a + b = " << add(a,b) << endl;
    return 0;
}