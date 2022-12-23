#include <iostream>
using namespace std;
int main()
{
    int i, s, z;
    s = 0;
    for (i = 20; i <= 100; i++) {
        z = i % 3;
        if (z==0)
            s = s + i;
    }
    cout << "Result: ";
    cout << s;
   
}


